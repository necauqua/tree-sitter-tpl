/// <reference types="tree-sitter-cli/dsl" />

module.exports = grammar({
  name: "tpl",

  extras: ($) => [/\s/],

  rules: {
    source_file: ($) => repeat(choice($.freetext, $.comment, $.list)),

    // free text outside of lists - also exclude ; to avoid freetext token gobbling semicolons from commented out lists
    freetext: ($) => token(/[^()\[\];]+/),
    comment: ($) => token(seq(";", /[^;\n]*/, optional(";"))),

    list: ($) =>
      choice(seq("(", repeat($._expr), ")"), seq("[", repeat($._expr), "]")),

    _expr: ($) => choice($.reader_macro, $.list, $.string, $.number, $.symbol),

    reader_macro: ($) =>
      choice(
        $.m_quote,
        $.m_quasiquote,
        $.m_unquote_splicing,
        $.m_unquote,
        $.m_get,
        $.m_dispatch,
      ),

    // m_ prefixes because some of these are scheme special forms lmao
    m_quote: ($) => seq("'", $._expr),
    m_quasiquote: ($) => seq("`", $._expr),
    m_unquote_splicing: ($) => seq("~@", $._expr),
    m_unquote: ($) => seq("~", $._expr),
    m_get: ($) => seq("%", $._expr),
    m_dispatch: ($) => seq("#", choice("t", "f", "inf", "-inf", "nan", $.list)),

    string: ($) =>
      seq('"', repeat(choice($.string_text, $.string_escape)), '"'),

    string_text: ($) => token(/[^"\\\n]+/),
    string_escape: ($) =>
      token(seq("\\", choice("n", "t", '"', "\\", /u\{[0-9a-fA-F]{1,6}\}/))),

    number: ($) => choice($.int, $.hex, $.float),

    int: ($) => token(seq(optional("-"), uint())),
    hex: ($) => token(seq(optional("-"), "0x", /[0-9a-fA-F]+/)),
    float: ($) =>
      token(
        seq(
          optional("-"),
          choice(
            // `123.456`, `123.000456`, `123.`, ..
            seq(uint(), ".", /\d*/),
            // .. `.456`, `.000456`
            seq(".", /\d+/),
            // scientific: `123e10`, `123.e10`, `123.456e10`, `.456e10`, `.00456e10`
            //   ^ `e10` there can also be `e-10` or `e+10`
            seq(
              choice(seq(uint(), optional(seq(".", /\d*/))), seq(".", /\d+/)),
              seq(/e[+-]?/, uint()),
            ),
          ),
        ),
      ),

    // anything excluding `(`, `)`, `[`, `]`, `"`, `;` and whitespace
    //   additionally cannot start with a reader macro so that tree-sitter does not see such a symbol as a single token
    symbol: ($) => token(/[^'`~%#()\[\]\s";][^()\[\]\s";]*/),
  },
});

function uint() {
  return choice("0", /[1-9]\d*/);
}
