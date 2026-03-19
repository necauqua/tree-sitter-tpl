/// <reference types="tree-sitter-cli/dsl" />

const uint = () => choice("0", /[1-9]\d*/);

module.exports = grammar({
  name: "tpl",

  extras: () => [], // handle all whitespace explicitly
  supertypes: ($) => [$.expression],

  rules: {
    source_file: ($) =>
      repeat(choice($.command, $.list, $.comment, $.freetext, $.newline)),

    newline: () => /\r?\n/,

    command: ($) =>
      prec.right(
        seq(
          $.command_identifier,
          repeat(choice($.expression, $.comment, /[ \t]+/)),
        ),
      ),

    // exclude list, comment starts and newlines so freetext stops there
    freetext: () => token(prec(-2, /[^(\[;\r\n]+/)),
    // no multiline comments, and single-line comments can stop before eol with another ;
    comment: () => token(seq(";", /[^;\r\n]*/, optional(";"))),

    _list_item: ($) => choice($.expression, $.comment, $.newline, /[ \t]+/),

    list: ($) =>
      choice(
        seq("(", repeat($._list_item), ")"),
        seq("[", repeat($._list_item), "]"),
      ),

    expression: ($) =>
      choice($.reader_macro, $.list, $.string, $.number, $.identifier),

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
    m_quote: ($) => seq("'", $.expression),
    m_quasiquote: ($) => seq("`", $.expression),
    m_unquote_splicing: ($) => seq("~@", $.expression),
    m_unquote: ($) => seq("~", $.expression),
    m_get: ($) => seq("%", $.expression),
    m_dispatch: ($) => seq("#", choice("t", "f", "inf", "-inf", "nan", $.list)),

    string: ($) =>
      seq('"', repeat(choice($.string_text, $.string_escape)), '"'),

    string_text: () => token(/[^"\\\r\n]+/),
    string_escape: () =>
      token(
        seq("\\", choice("n", "r", "t", '"', "\\", /u\{[0-9a-fA-F]{1,6}\}/)),
      ),

    number: ($) => choice($.int, $.hex, $.float),

    int: () => token(seq(optional("-"), uint())),
    hex: () => token(seq(optional("-"), "0x", /[0-9a-fA-F]+/)),
    float: () =>
      token(
        seq(
          optional("-"),
          choice(
            // `123.456`, `123.000456`, `123.`, ..
            seq(uint(), ".", /\d*/),
            // .. `.456`, `.000456`
            seq(".", /\d+/),
            // scientific: `123e10`, `123.e10`, `123.456e10`, `.456e10`, `.00456e10`
            //   ^ `e10` there can also be `e-10` or `e+10` (and `e` everywhere is case-insensitive)
            seq(
              choice(seq(uint(), optional(seq(".", /\d*/))), seq(".", /\d+/)),
              seq(/[eE][+-]?/, uint()),
            ),
          ),
        ),
      ),

    // anything excluding `(`, `)`, `[`, `]`, `"`, `;` and whitespace
    identifier: () => token(prec(-1, /[^()\[\]";\s]+/)),
    command_identifier: () => /![^()\[\]";\s]+/,
  },
});
