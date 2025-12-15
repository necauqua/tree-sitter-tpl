module.exports = grammar({
  name: "tpl",

  extras: ($) => [/\s/, $.comment],

  rules: {
    source_file: ($) => repeat(choice($.text, $.list)),

    comment: ($) => token(seq(";", /[^;\n]*/, optional(";"))),

    text: ($) => /[^()\[\]]+/,

    list: ($) =>
      choice(seq("(", repeat($._expr), ")"), seq("[", repeat($._expr), "]")),

    _expr: ($) =>
      choice(
        $.list,
        $._reader_macro,
        $.string,
        $.hex_number,
        $.float,
        $.number,
        $.symbol,
      ),

    _reader_macro: ($) =>
      choice(
        $.quote,
        $.quasiquote,
        $.unquote_splicing,
        $.unquote,
        $.get_macro,
        $._dispatch_macro,
      ),

    quote: ($) => seq("'", $._expr),
    quasiquote: ($) => seq("`", $._expr),
    unquote_splicing: ($) => seq("~@", $._expr),
    unquote: ($) => seq("~", $._expr),
    get_macro: ($) => seq("%", $._expr),

    _dispatch_macro: ($) =>
      seq("#", choice($.boolean, $.special_float, $.anon_fn)),

    boolean: ($) => choice("t", "f"),

    special_float: ($) => choice("inf", "-inf", "nan"),

    anon_fn: ($) => $.list,

    string: ($) =>
      token(
        seq(
          '"',
          repeat(
            choice(
              /[^"\\\n]/,
              seq(
                "\\",
                choice(
                  "n",
                  "t",
                  '"',
                  "\\",
                  seq("u", "{", /[0-9a-fA-F]{1,6}/, "}"),
                ),
              ),
            ),
          ),
          '"',
        ),
      ),

    hex_number: ($) => token(seq(optional("-"), "0x", /[0-9a-fA-F]+/)),

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
            //   ^ `e10` there can also be `e-10` or `e+10`, case-insensitive
            seq(
              choice(seq(uint(), optional(seq(".", /\d*/))), seq(".", /\d+/)),
              seq(/[eE][+-]?/, uint()),
            ),
          ),
        ),
      ),

    number: ($) => token(seq(optional("-"), uint())),

    // anything excluding `(`, `)`, `[`, `]`, whitespace, and `;`
    //   additionally cannot start with a reader macro so that tree-sitter does not see such a symbol as a single token
    symbol: ($) => token(/[^'`~%#()\[\]\s;][^()\[\]\s;]*/),
  },
});

function uint() {
  return choice("0", /[1-9]\d*/);
}
