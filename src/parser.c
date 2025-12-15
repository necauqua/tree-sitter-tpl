#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_comment = 1,
  sym_text = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_SQUOTE = 7,
  anon_sym_BQUOTE = 8,
  anon_sym_TILDE_AT = 9,
  anon_sym_TILDE = 10,
  anon_sym_PERCENT = 11,
  anon_sym_POUND = 12,
  anon_sym_t = 13,
  anon_sym_f = 14,
  anon_sym_inf = 15,
  anon_sym_DASHinf = 16,
  anon_sym_nan = 17,
  sym_string = 18,
  sym_hex_number = 19,
  sym_float = 20,
  sym_number = 21,
  sym_symbol = 22,
  sym_source_file = 23,
  sym_list = 24,
  sym__expr = 25,
  sym__reader_macro = 26,
  sym_quote = 27,
  sym_quasiquote = 28,
  sym_unquote_splicing = 29,
  sym_unquote = 30,
  sym_get_macro = 31,
  sym__dispatch_macro = 32,
  sym_boolean = 33,
  sym_special_float = 34,
  sym_anon_fn = 35,
  aux_sym_source_file_repeat1 = 36,
  aux_sym_list_repeat1 = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym_text] = "text",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_TILDE_AT] = "~@",
  [anon_sym_TILDE] = "~",
  [anon_sym_PERCENT] = "%",
  [anon_sym_POUND] = "#",
  [anon_sym_t] = "t",
  [anon_sym_f] = "f",
  [anon_sym_inf] = "inf",
  [anon_sym_DASHinf] = "-inf",
  [anon_sym_nan] = "nan",
  [sym_string] = "string",
  [sym_hex_number] = "hex_number",
  [sym_float] = "float",
  [sym_number] = "number",
  [sym_symbol] = "symbol",
  [sym_source_file] = "source_file",
  [sym_list] = "list",
  [sym__expr] = "_expr",
  [sym__reader_macro] = "_reader_macro",
  [sym_quote] = "quote",
  [sym_quasiquote] = "quasiquote",
  [sym_unquote_splicing] = "unquote_splicing",
  [sym_unquote] = "unquote",
  [sym_get_macro] = "get_macro",
  [sym__dispatch_macro] = "_dispatch_macro",
  [sym_boolean] = "boolean",
  [sym_special_float] = "special_float",
  [sym_anon_fn] = "anon_fn",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym_text] = sym_text,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_TILDE_AT] = anon_sym_TILDE_AT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_t] = anon_sym_t,
  [anon_sym_f] = anon_sym_f,
  [anon_sym_inf] = anon_sym_inf,
  [anon_sym_DASHinf] = anon_sym_DASHinf,
  [anon_sym_nan] = anon_sym_nan,
  [sym_string] = sym_string,
  [sym_hex_number] = sym_hex_number,
  [sym_float] = sym_float,
  [sym_number] = sym_number,
  [sym_symbol] = sym_symbol,
  [sym_source_file] = sym_source_file,
  [sym_list] = sym_list,
  [sym__expr] = sym__expr,
  [sym__reader_macro] = sym__reader_macro,
  [sym_quote] = sym_quote,
  [sym_quasiquote] = sym_quasiquote,
  [sym_unquote_splicing] = sym_unquote_splicing,
  [sym_unquote] = sym_unquote,
  [sym_get_macro] = sym_get_macro,
  [sym__dispatch_macro] = sym__dispatch_macro,
  [sym_boolean] = sym_boolean,
  [sym_special_float] = sym_special_float,
  [sym_anon_fn] = sym_anon_fn,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHinf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nan] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_number] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym__reader_macro] = {
    .visible = false,
    .named = true,
  },
  [sym_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_quasiquote] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote_splicing] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote] = {
    .visible = true,
    .named = true,
  },
  [sym_get_macro] = {
    .visible = true,
    .named = true,
  },
  [sym__dispatch_macro] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_special_float] = {
    .visible = true,
    .named = true,
  },
  [sym_anon_fn] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 4,
  [8] = 3,
  [9] = 6,
  [10] = 5,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 26,
  [31] = 25,
  [32] = 32,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(24);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(40);
      if (lookahead == '%') ADVANCE(39);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '0') ADVANCE(57);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == ']') ADVANCE(34);
      if (lookahead == '`') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(6);
      if (lookahead == 't') ADVANCE(42);
      if (lookahead == '~') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == '%') ADVANCE(39);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '0') ADVANCE(59);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == ']') ADVANCE(34);
      if (lookahead == '`') ADVANCE(36);
      if (lookahead == '~') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '0') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(11);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(51);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(5);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(51);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'f') ADVANCE(44);
      END_STATE();
    case 8:
      if (lookahead == 'f') ADVANCE(45);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == '{') ADVANCE(22);
      END_STATE();
    case 13:
      if (lookahead == '}') ADVANCE(1);
      END_STATE();
    case 14:
      if (lookahead == '}') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '}') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '}') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '}') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '}') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 't') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(30);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == ';') ADVANCE(28);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(27);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(30);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_TILDE_AT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '@') ADVANCE(37);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_inf);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DASHinf);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_nan);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_hex_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_hex_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_float);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'x') ADVANCE(21);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'x') ADVANCE(74);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '0') ADVANCE(59);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '0') ADVANCE(56);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(64);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '0') ADVANCE(56);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '{') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '}') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '}') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '}') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '}') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '}') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '}') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 't') ADVANCE(61);
      if (lookahead == 'u') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(76);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 23},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 23},
  [29] = {.lex_state = 23},
  [30] = {.lex_state = 23},
  [31] = {.lex_state = 23},
  [32] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_TILDE_AT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_t] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [anon_sym_inf] = ACTIONS(1),
    [anon_sym_DASHinf] = ACTIONS(1),
    [anon_sym_nan] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_hex_number] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(32),
    [sym_list] = STATE(29),
    [aux_sym_source_file_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym_text] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
  },
  [2] = {
    [sym_list] = STATE(2),
    [sym__expr] = STATE(2),
    [sym__reader_macro] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_get_macro] = STATE(2),
    [sym__dispatch_macro] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(18),
    [anon_sym_LBRACK] = ACTIONS(20),
    [anon_sym_RBRACK] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(26),
    [anon_sym_TILDE_AT] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(32),
    [anon_sym_PERCENT] = ACTIONS(35),
    [anon_sym_POUND] = ACTIONS(38),
    [sym_string] = ACTIONS(41),
    [sym_hex_number] = ACTIONS(41),
    [sym_float] = ACTIONS(41),
    [sym_number] = ACTIONS(41),
    [sym_symbol] = ACTIONS(41),
  },
  [3] = {
    [sym_list] = STATE(9),
    [sym__expr] = STATE(9),
    [sym__reader_macro] = STATE(9),
    [sym_quote] = STATE(9),
    [sym_quasiquote] = STATE(9),
    [sym_unquote_splicing] = STATE(9),
    [sym_unquote] = STATE(9),
    [sym_get_macro] = STATE(9),
    [sym__dispatch_macro] = STATE(9),
    [aux_sym_list_repeat1] = STATE(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_RPAREN] = ACTIONS(46),
    [anon_sym_LBRACK] = ACTIONS(48),
    [anon_sym_SQUOTE] = ACTIONS(50),
    [anon_sym_BQUOTE] = ACTIONS(52),
    [anon_sym_TILDE_AT] = ACTIONS(54),
    [anon_sym_TILDE] = ACTIONS(56),
    [anon_sym_PERCENT] = ACTIONS(58),
    [anon_sym_POUND] = ACTIONS(60),
    [sym_string] = ACTIONS(62),
    [sym_hex_number] = ACTIONS(62),
    [sym_float] = ACTIONS(62),
    [sym_number] = ACTIONS(62),
    [sym_symbol] = ACTIONS(62),
  },
  [4] = {
    [sym_list] = STATE(10),
    [sym__expr] = STATE(10),
    [sym__reader_macro] = STATE(10),
    [sym_quote] = STATE(10),
    [sym_quasiquote] = STATE(10),
    [sym_unquote_splicing] = STATE(10),
    [sym_unquote] = STATE(10),
    [sym_get_macro] = STATE(10),
    [sym__dispatch_macro] = STATE(10),
    [aux_sym_list_repeat1] = STATE(10),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACK] = ACTIONS(48),
    [anon_sym_RBRACK] = ACTIONS(46),
    [anon_sym_SQUOTE] = ACTIONS(50),
    [anon_sym_BQUOTE] = ACTIONS(52),
    [anon_sym_TILDE_AT] = ACTIONS(54),
    [anon_sym_TILDE] = ACTIONS(56),
    [anon_sym_PERCENT] = ACTIONS(58),
    [anon_sym_POUND] = ACTIONS(60),
    [sym_string] = ACTIONS(64),
    [sym_hex_number] = ACTIONS(64),
    [sym_float] = ACTIONS(64),
    [sym_number] = ACTIONS(64),
    [sym_symbol] = ACTIONS(64),
  },
  [5] = {
    [sym_list] = STATE(2),
    [sym__expr] = STATE(2),
    [sym__reader_macro] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_get_macro] = STATE(2),
    [sym__dispatch_macro] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACK] = ACTIONS(48),
    [anon_sym_RBRACK] = ACTIONS(66),
    [anon_sym_SQUOTE] = ACTIONS(50),
    [anon_sym_BQUOTE] = ACTIONS(52),
    [anon_sym_TILDE_AT] = ACTIONS(54),
    [anon_sym_TILDE] = ACTIONS(56),
    [anon_sym_PERCENT] = ACTIONS(58),
    [anon_sym_POUND] = ACTIONS(60),
    [sym_string] = ACTIONS(68),
    [sym_hex_number] = ACTIONS(68),
    [sym_float] = ACTIONS(68),
    [sym_number] = ACTIONS(68),
    [sym_symbol] = ACTIONS(68),
  },
  [6] = {
    [sym_list] = STATE(2),
    [sym__expr] = STATE(2),
    [sym__reader_macro] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_get_macro] = STATE(2),
    [sym__dispatch_macro] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_RPAREN] = ACTIONS(66),
    [anon_sym_LBRACK] = ACTIONS(48),
    [anon_sym_SQUOTE] = ACTIONS(50),
    [anon_sym_BQUOTE] = ACTIONS(52),
    [anon_sym_TILDE_AT] = ACTIONS(54),
    [anon_sym_TILDE] = ACTIONS(56),
    [anon_sym_PERCENT] = ACTIONS(58),
    [anon_sym_POUND] = ACTIONS(60),
    [sym_string] = ACTIONS(68),
    [sym_hex_number] = ACTIONS(68),
    [sym_float] = ACTIONS(68),
    [sym_number] = ACTIONS(68),
    [sym_symbol] = ACTIONS(68),
  },
  [7] = {
    [sym_list] = STATE(5),
    [sym__expr] = STATE(5),
    [sym__reader_macro] = STATE(5),
    [sym_quote] = STATE(5),
    [sym_quasiquote] = STATE(5),
    [sym_unquote_splicing] = STATE(5),
    [sym_unquote] = STATE(5),
    [sym_get_macro] = STATE(5),
    [sym__dispatch_macro] = STATE(5),
    [aux_sym_list_repeat1] = STATE(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACK] = ACTIONS(48),
    [anon_sym_RBRACK] = ACTIONS(70),
    [anon_sym_SQUOTE] = ACTIONS(50),
    [anon_sym_BQUOTE] = ACTIONS(52),
    [anon_sym_TILDE_AT] = ACTIONS(54),
    [anon_sym_TILDE] = ACTIONS(56),
    [anon_sym_PERCENT] = ACTIONS(58),
    [anon_sym_POUND] = ACTIONS(60),
    [sym_string] = ACTIONS(72),
    [sym_hex_number] = ACTIONS(72),
    [sym_float] = ACTIONS(72),
    [sym_number] = ACTIONS(72),
    [sym_symbol] = ACTIONS(72),
  },
  [8] = {
    [sym_list] = STATE(6),
    [sym__expr] = STATE(6),
    [sym__reader_macro] = STATE(6),
    [sym_quote] = STATE(6),
    [sym_quasiquote] = STATE(6),
    [sym_unquote_splicing] = STATE(6),
    [sym_unquote] = STATE(6),
    [sym_get_macro] = STATE(6),
    [sym__dispatch_macro] = STATE(6),
    [aux_sym_list_repeat1] = STATE(6),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_RPAREN] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(48),
    [anon_sym_SQUOTE] = ACTIONS(50),
    [anon_sym_BQUOTE] = ACTIONS(52),
    [anon_sym_TILDE_AT] = ACTIONS(54),
    [anon_sym_TILDE] = ACTIONS(56),
    [anon_sym_PERCENT] = ACTIONS(58),
    [anon_sym_POUND] = ACTIONS(60),
    [sym_string] = ACTIONS(74),
    [sym_hex_number] = ACTIONS(74),
    [sym_float] = ACTIONS(74),
    [sym_number] = ACTIONS(74),
    [sym_symbol] = ACTIONS(74),
  },
  [9] = {
    [sym_list] = STATE(2),
    [sym__expr] = STATE(2),
    [sym__reader_macro] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_get_macro] = STATE(2),
    [sym__dispatch_macro] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_RPAREN] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(48),
    [anon_sym_SQUOTE] = ACTIONS(50),
    [anon_sym_BQUOTE] = ACTIONS(52),
    [anon_sym_TILDE_AT] = ACTIONS(54),
    [anon_sym_TILDE] = ACTIONS(56),
    [anon_sym_PERCENT] = ACTIONS(58),
    [anon_sym_POUND] = ACTIONS(60),
    [sym_string] = ACTIONS(68),
    [sym_hex_number] = ACTIONS(68),
    [sym_float] = ACTIONS(68),
    [sym_number] = ACTIONS(68),
    [sym_symbol] = ACTIONS(68),
  },
  [10] = {
    [sym_list] = STATE(2),
    [sym__expr] = STATE(2),
    [sym__reader_macro] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_get_macro] = STATE(2),
    [sym__dispatch_macro] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACK] = ACTIONS(48),
    [anon_sym_RBRACK] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(50),
    [anon_sym_BQUOTE] = ACTIONS(52),
    [anon_sym_TILDE_AT] = ACTIONS(54),
    [anon_sym_TILDE] = ACTIONS(56),
    [anon_sym_PERCENT] = ACTIONS(58),
    [anon_sym_POUND] = ACTIONS(60),
    [sym_string] = ACTIONS(68),
    [sym_hex_number] = ACTIONS(68),
    [sym_float] = ACTIONS(68),
    [sym_number] = ACTIONS(68),
    [sym_symbol] = ACTIONS(68),
  },
  [11] = {
    [sym_list] = STATE(16),
    [sym__expr] = STATE(16),
    [sym__reader_macro] = STATE(16),
    [sym_quote] = STATE(16),
    [sym_quasiquote] = STATE(16),
    [sym_unquote_splicing] = STATE(16),
    [sym_unquote] = STATE(16),
    [sym_get_macro] = STATE(16),
    [sym__dispatch_macro] = STATE(16),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACK] = ACTIONS(48),
    [anon_sym_SQUOTE] = ACTIONS(50),
    [anon_sym_BQUOTE] = ACTIONS(52),
    [anon_sym_TILDE_AT] = ACTIONS(54),
    [anon_sym_TILDE] = ACTIONS(56),
    [anon_sym_PERCENT] = ACTIONS(58),
    [anon_sym_POUND] = ACTIONS(60),
    [sym_string] = ACTIONS(78),
    [sym_hex_number] = ACTIONS(78),
    [sym_float] = ACTIONS(78),
    [sym_number] = ACTIONS(78),
    [sym_symbol] = ACTIONS(78),
  },
  [12] = {
    [sym_list] = STATE(17),
    [sym__expr] = STATE(17),
    [sym__reader_macro] = STATE(17),
    [sym_quote] = STATE(17),
    [sym_quasiquote] = STATE(17),
    [sym_unquote_splicing] = STATE(17),
    [sym_unquote] = STATE(17),
    [sym_get_macro] = STATE(17),
    [sym__dispatch_macro] = STATE(17),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACK] = ACTIONS(48),
    [anon_sym_SQUOTE] = ACTIONS(50),
    [anon_sym_BQUOTE] = ACTIONS(52),
    [anon_sym_TILDE_AT] = ACTIONS(54),
    [anon_sym_TILDE] = ACTIONS(56),
    [anon_sym_PERCENT] = ACTIONS(58),
    [anon_sym_POUND] = ACTIONS(60),
    [sym_string] = ACTIONS(80),
    [sym_hex_number] = ACTIONS(80),
    [sym_float] = ACTIONS(80),
    [sym_number] = ACTIONS(80),
    [sym_symbol] = ACTIONS(80),
  },
  [13] = {
    [sym_list] = STATE(18),
    [sym__expr] = STATE(18),
    [sym__reader_macro] = STATE(18),
    [sym_quote] = STATE(18),
    [sym_quasiquote] = STATE(18),
    [sym_unquote_splicing] = STATE(18),
    [sym_unquote] = STATE(18),
    [sym_get_macro] = STATE(18),
    [sym__dispatch_macro] = STATE(18),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACK] = ACTIONS(48),
    [anon_sym_SQUOTE] = ACTIONS(50),
    [anon_sym_BQUOTE] = ACTIONS(52),
    [anon_sym_TILDE_AT] = ACTIONS(54),
    [anon_sym_TILDE] = ACTIONS(56),
    [anon_sym_PERCENT] = ACTIONS(58),
    [anon_sym_POUND] = ACTIONS(60),
    [sym_string] = ACTIONS(82),
    [sym_hex_number] = ACTIONS(82),
    [sym_float] = ACTIONS(82),
    [sym_number] = ACTIONS(82),
    [sym_symbol] = ACTIONS(82),
  },
  [14] = {
    [sym_list] = STATE(19),
    [sym__expr] = STATE(19),
    [sym__reader_macro] = STATE(19),
    [sym_quote] = STATE(19),
    [sym_quasiquote] = STATE(19),
    [sym_unquote_splicing] = STATE(19),
    [sym_unquote] = STATE(19),
    [sym_get_macro] = STATE(19),
    [sym__dispatch_macro] = STATE(19),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACK] = ACTIONS(48),
    [anon_sym_SQUOTE] = ACTIONS(50),
    [anon_sym_BQUOTE] = ACTIONS(52),
    [anon_sym_TILDE_AT] = ACTIONS(54),
    [anon_sym_TILDE] = ACTIONS(56),
    [anon_sym_PERCENT] = ACTIONS(58),
    [anon_sym_POUND] = ACTIONS(60),
    [sym_string] = ACTIONS(84),
    [sym_hex_number] = ACTIONS(84),
    [sym_float] = ACTIONS(84),
    [sym_number] = ACTIONS(84),
    [sym_symbol] = ACTIONS(84),
  },
  [15] = {
    [sym_list] = STATE(20),
    [sym__expr] = STATE(20),
    [sym__reader_macro] = STATE(20),
    [sym_quote] = STATE(20),
    [sym_quasiquote] = STATE(20),
    [sym_unquote_splicing] = STATE(20),
    [sym_unquote] = STATE(20),
    [sym_get_macro] = STATE(20),
    [sym__dispatch_macro] = STATE(20),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_LBRACK] = ACTIONS(48),
    [anon_sym_SQUOTE] = ACTIONS(50),
    [anon_sym_BQUOTE] = ACTIONS(52),
    [anon_sym_TILDE_AT] = ACTIONS(54),
    [anon_sym_TILDE] = ACTIONS(56),
    [anon_sym_PERCENT] = ACTIONS(58),
    [anon_sym_POUND] = ACTIONS(60),
    [sym_string] = ACTIONS(86),
    [sym_hex_number] = ACTIONS(86),
    [sym_float] = ACTIONS(86),
    [sym_number] = ACTIONS(86),
    [sym_symbol] = ACTIONS(86),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 7,
      anon_sym_TILDE,
      anon_sym_POUND,
      sym_string,
      sym_hex_number,
      sym_float,
      sym_number,
      sym_symbol,
    ACTIONS(88), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
  [23] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 7,
      anon_sym_TILDE,
      anon_sym_POUND,
      sym_string,
      sym_hex_number,
      sym_float,
      sym_number,
      sym_symbol,
    ACTIONS(92), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
  [46] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 7,
      anon_sym_TILDE,
      anon_sym_POUND,
      sym_string,
      sym_hex_number,
      sym_float,
      sym_number,
      sym_symbol,
    ACTIONS(96), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
  [69] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 7,
      anon_sym_TILDE,
      anon_sym_POUND,
      sym_string,
      sym_hex_number,
      sym_float,
      sym_number,
      sym_symbol,
    ACTIONS(100), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
  [92] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 7,
      anon_sym_TILDE,
      anon_sym_POUND,
      sym_string,
      sym_hex_number,
      sym_float,
      sym_number,
      sym_symbol,
    ACTIONS(104), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
  [115] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 7,
      anon_sym_TILDE,
      anon_sym_POUND,
      sym_string,
      sym_hex_number,
      sym_float,
      sym_number,
      sym_symbol,
    ACTIONS(108), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
  [138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 7,
      anon_sym_TILDE,
      anon_sym_POUND,
      sym_string,
      sym_hex_number,
      sym_float,
      sym_number,
      sym_symbol,
    ACTIONS(112), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
  [161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 7,
      anon_sym_TILDE,
      anon_sym_POUND,
      sym_string,
      sym_hex_number,
      sym_float,
      sym_number,
      sym_symbol,
    ACTIONS(116), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
  [184] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 7,
      anon_sym_TILDE,
      anon_sym_POUND,
      sym_string,
      sym_hex_number,
      sym_float,
      sym_number,
      sym_symbol,
    ACTIONS(120), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
  [207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 7,
      anon_sym_TILDE,
      anon_sym_POUND,
      sym_string,
      sym_hex_number,
      sym_float,
      sym_number,
      sym_symbol,
    ACTIONS(124), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
  [230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 7,
      anon_sym_TILDE,
      anon_sym_POUND,
      sym_string,
      sym_hex_number,
      sym_float,
      sym_number,
      sym_symbol,
    ACTIONS(128), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
  [253] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    ACTIONS(48), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym_list,
    ACTIONS(132), 2,
      anon_sym_t,
      anon_sym_f,
    ACTIONS(134), 3,
      anon_sym_inf,
      anon_sym_DASHinf,
      anon_sym_nan,
    STATE(24), 3,
      sym_boolean,
      sym_special_float,
      sym_anon_fn,
  [280] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    ACTIONS(138), 1,
      sym_text,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    STATE(28), 2,
      sym_list,
      aux_sym_source_file_repeat1,
  [300] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 1,
      sym_text,
    STATE(28), 2,
      sym_list,
      aux_sym_source_file_repeat1,
  [320] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 3,
      sym_text,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [332] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    ACTIONS(126), 3,
      sym_text,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
  [SMALL_STATE(17)] = 23,
  [SMALL_STATE(18)] = 46,
  [SMALL_STATE(19)] = 69,
  [SMALL_STATE(20)] = 92,
  [SMALL_STATE(21)] = 115,
  [SMALL_STATE(22)] = 138,
  [SMALL_STATE(23)] = 161,
  [SMALL_STATE(24)] = 184,
  [SMALL_STATE(25)] = 207,
  [SMALL_STATE(26)] = 230,
  [SMALL_STATE(27)] = 253,
  [SMALL_STATE(28)] = 280,
  [SMALL_STATE(29)] = 300,
  [SMALL_STATE(30)] = 320,
  [SMALL_STATE(31)] = 332,
  [SMALL_STATE(32)] = 344,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(8),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(7),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(11),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(12),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(13),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(14),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(15),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(27),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasiquote, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasiquote, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splicing, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splicing, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get_macro, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get_macro, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_float, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_float, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anon_fn, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_anon_fn, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dispatch_macro, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__dispatch_macro, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [151] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_tpl(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
