#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_freetext = 1,
  sym_comment = 2,
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
  anon_sym_DQUOTE = 18,
  sym_string_text = 19,
  sym_string_escape = 20,
  sym_int = 21,
  sym_hex = 22,
  sym_float = 23,
  sym_symbol = 24,
  sym_source_file = 25,
  sym_list = 26,
  sym__expr = 27,
  sym_reader_macro = 28,
  sym_m_quote = 29,
  sym_m_quasiquote = 30,
  sym_m_unquote_splicing = 31,
  sym_m_unquote = 32,
  sym_m_get = 33,
  sym_m_dispatch = 34,
  sym_string = 35,
  sym_number = 36,
  aux_sym_source_file_repeat1 = 37,
  aux_sym_list_repeat1 = 38,
  aux_sym_string_repeat1 = 39,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_freetext] = "freetext",
  [sym_comment] = "comment",
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
  [anon_sym_DQUOTE] = "\"",
  [sym_string_text] = "string_text",
  [sym_string_escape] = "string_escape",
  [sym_int] = "int",
  [sym_hex] = "hex",
  [sym_float] = "float",
  [sym_symbol] = "symbol",
  [sym_source_file] = "source_file",
  [sym_list] = "list",
  [sym__expr] = "_expr",
  [sym_reader_macro] = "reader_macro",
  [sym_m_quote] = "m_quote",
  [sym_m_quasiquote] = "m_quasiquote",
  [sym_m_unquote_splicing] = "m_unquote_splicing",
  [sym_m_unquote] = "m_unquote",
  [sym_m_get] = "m_get",
  [sym_m_dispatch] = "m_dispatch",
  [sym_string] = "string",
  [sym_number] = "number",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_freetext] = sym_freetext,
  [sym_comment] = sym_comment,
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
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_string_text] = sym_string_text,
  [sym_string_escape] = sym_string_escape,
  [sym_int] = sym_int,
  [sym_hex] = sym_hex,
  [sym_float] = sym_float,
  [sym_symbol] = sym_symbol,
  [sym_source_file] = sym_source_file,
  [sym_list] = sym_list,
  [sym__expr] = sym__expr,
  [sym_reader_macro] = sym_reader_macro,
  [sym_m_quote] = sym_m_quote,
  [sym_m_quasiquote] = sym_m_quasiquote,
  [sym_m_unquote_splicing] = sym_m_unquote_splicing,
  [sym_m_unquote] = sym_m_unquote,
  [sym_m_get] = sym_m_get,
  [sym_m_dispatch] = sym_m_dispatch,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_freetext] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_string_text] = {
    .visible = true,
    .named = true,
  },
  [sym_string_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_hex] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
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
  [sym_reader_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_m_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_m_quasiquote] = {
    .visible = true,
    .named = true,
  },
  [sym_m_unquote_splicing] = {
    .visible = true,
    .named = true,
  },
  [sym_m_unquote] = {
    .visible = true,
    .named = true,
  },
  [sym_m_get] = {
    .visible = true,
    .named = true,
  },
  [sym_m_dispatch] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
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
  [aux_sym_string_repeat1] = {
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
  [7] = 3,
  [8] = 5,
  [9] = 4,
  [10] = 6,
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
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 17,
  [34] = 34,
  [35] = 27,
  [36] = 36,
};

static inline bool sym_symbol_character_set_1(int32_t c) {
  return (c < '"'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == ' '))
    : (c <= '"' || (c < '['
      ? (c < ';'
        ? (c >= '(' && c <= ')')
        : c <= ';')
      : (c <= '[' || c == ']'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(24);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '%') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(33);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '0') ADVANCE(48);
      if (lookahead == ';') ADVANCE(28);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == ']') ADVANCE(32);
      if (lookahead == '`') ADVANCE(34);
      if (lookahead == 'f') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(6);
      if (lookahead == 't') ADVANCE(39);
      if (lookahead == '~') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '%') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(33);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '0') ADVANCE(50);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == ']') ADVANCE(32);
      if (lookahead == '`') ADVANCE(34);
      if (lookahead == '~') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(65);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '0') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(11);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(54);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(5);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(54);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'f') ADVANCE(41);
      END_STATE();
    case 8:
      if (lookahead == 'f') ADVANCE(42);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == '{') ADVANCE(22);
      END_STATE();
    case 13:
      if (lookahead == '}') ADVANCE(47);
      END_STATE();
    case 14:
      if (lookahead == '}') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '}') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '}') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '}') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '}') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 't') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != ']') ADVANCE(26);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_freetext);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_freetext);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_TILDE_AT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '@') ADVANCE(35);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_inf);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DASHinf);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_nan);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_string_text);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_string_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_string_escape);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'x') ADVANCE(21);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == 'e') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'x') ADVANCE(64);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(65);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(65);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(65);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'e') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'e') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(65);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(65);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_float);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(65);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '0') ADVANCE(50);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(65);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '0') ADVANCE(59);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(62);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(65);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '0') ADVANCE(59);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(65);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_symbol);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(65);
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
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 23},
  [30] = {.lex_state = 23},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 23},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 23},
  [36] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
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
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_string_escape] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [sym_hex] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(36),
    [sym_list] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_freetext] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
  },
  [2] = {
    [sym_list] = STATE(2),
    [sym__expr] = STATE(2),
    [sym_reader_macro] = STATE(2),
    [sym_m_quote] = STATE(18),
    [sym_m_quasiquote] = STATE(18),
    [sym_m_unquote_splicing] = STATE(18),
    [sym_m_unquote] = STATE(18),
    [sym_m_get] = STATE(18),
    [sym_m_dispatch] = STATE(18),
    [sym_string] = STATE(2),
    [sym_number] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(14),
    [anon_sym_LBRACK] = ACTIONS(16),
    [anon_sym_RBRACK] = ACTIONS(14),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(22),
    [anon_sym_TILDE_AT] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(28),
    [anon_sym_PERCENT] = ACTIONS(31),
    [anon_sym_POUND] = ACTIONS(34),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_int] = ACTIONS(40),
    [sym_hex] = ACTIONS(40),
    [sym_float] = ACTIONS(40),
    [sym_symbol] = ACTIONS(43),
  },
  [3] = {
    [sym_list] = STATE(2),
    [sym__expr] = STATE(2),
    [sym_reader_macro] = STATE(2),
    [sym_m_quote] = STATE(18),
    [sym_m_quasiquote] = STATE(18),
    [sym_m_unquote_splicing] = STATE(18),
    [sym_m_unquote] = STATE(18),
    [sym_m_get] = STATE(18),
    [sym_m_dispatch] = STATE(18),
    [sym_string] = STATE(2),
    [sym_number] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(48),
    [anon_sym_LBRACK] = ACTIONS(50),
    [anon_sym_SQUOTE] = ACTIONS(52),
    [anon_sym_BQUOTE] = ACTIONS(54),
    [anon_sym_TILDE_AT] = ACTIONS(56),
    [anon_sym_TILDE] = ACTIONS(58),
    [anon_sym_PERCENT] = ACTIONS(60),
    [anon_sym_POUND] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [sym_int] = ACTIONS(66),
    [sym_hex] = ACTIONS(66),
    [sym_float] = ACTIONS(66),
    [sym_symbol] = ACTIONS(68),
  },
  [4] = {
    [sym_list] = STATE(3),
    [sym__expr] = STATE(3),
    [sym_reader_macro] = STATE(3),
    [sym_m_quote] = STATE(18),
    [sym_m_quasiquote] = STATE(18),
    [sym_m_unquote_splicing] = STATE(18),
    [sym_m_unquote] = STATE(18),
    [sym_m_get] = STATE(18),
    [sym_m_dispatch] = STATE(18),
    [sym_string] = STATE(3),
    [sym_number] = STATE(3),
    [aux_sym_list_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(50),
    [anon_sym_SQUOTE] = ACTIONS(52),
    [anon_sym_BQUOTE] = ACTIONS(54),
    [anon_sym_TILDE_AT] = ACTIONS(56),
    [anon_sym_TILDE] = ACTIONS(58),
    [anon_sym_PERCENT] = ACTIONS(60),
    [anon_sym_POUND] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [sym_int] = ACTIONS(66),
    [sym_hex] = ACTIONS(66),
    [sym_float] = ACTIONS(66),
    [sym_symbol] = ACTIONS(72),
  },
  [5] = {
    [sym_list] = STATE(10),
    [sym__expr] = STATE(10),
    [sym_reader_macro] = STATE(10),
    [sym_m_quote] = STATE(18),
    [sym_m_quasiquote] = STATE(18),
    [sym_m_unquote_splicing] = STATE(18),
    [sym_m_unquote] = STATE(18),
    [sym_m_get] = STATE(18),
    [sym_m_dispatch] = STATE(18),
    [sym_string] = STATE(10),
    [sym_number] = STATE(10),
    [aux_sym_list_repeat1] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_LBRACK] = ACTIONS(50),
    [anon_sym_RBRACK] = ACTIONS(70),
    [anon_sym_SQUOTE] = ACTIONS(52),
    [anon_sym_BQUOTE] = ACTIONS(54),
    [anon_sym_TILDE_AT] = ACTIONS(56),
    [anon_sym_TILDE] = ACTIONS(58),
    [anon_sym_PERCENT] = ACTIONS(60),
    [anon_sym_POUND] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [sym_int] = ACTIONS(66),
    [sym_hex] = ACTIONS(66),
    [sym_float] = ACTIONS(66),
    [sym_symbol] = ACTIONS(74),
  },
  [6] = {
    [sym_list] = STATE(2),
    [sym__expr] = STATE(2),
    [sym_reader_macro] = STATE(2),
    [sym_m_quote] = STATE(18),
    [sym_m_quasiquote] = STATE(18),
    [sym_m_unquote_splicing] = STATE(18),
    [sym_m_unquote] = STATE(18),
    [sym_m_get] = STATE(18),
    [sym_m_dispatch] = STATE(18),
    [sym_string] = STATE(2),
    [sym_number] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_LBRACK] = ACTIONS(50),
    [anon_sym_RBRACK] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(52),
    [anon_sym_BQUOTE] = ACTIONS(54),
    [anon_sym_TILDE_AT] = ACTIONS(56),
    [anon_sym_TILDE] = ACTIONS(58),
    [anon_sym_PERCENT] = ACTIONS(60),
    [anon_sym_POUND] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [sym_int] = ACTIONS(66),
    [sym_hex] = ACTIONS(66),
    [sym_float] = ACTIONS(66),
    [sym_symbol] = ACTIONS(68),
  },
  [7] = {
    [sym_list] = STATE(2),
    [sym__expr] = STATE(2),
    [sym_reader_macro] = STATE(2),
    [sym_m_quote] = STATE(18),
    [sym_m_quasiquote] = STATE(18),
    [sym_m_unquote_splicing] = STATE(18),
    [sym_m_unquote] = STATE(18),
    [sym_m_get] = STATE(18),
    [sym_m_dispatch] = STATE(18),
    [sym_string] = STATE(2),
    [sym_number] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(50),
    [anon_sym_SQUOTE] = ACTIONS(52),
    [anon_sym_BQUOTE] = ACTIONS(54),
    [anon_sym_TILDE_AT] = ACTIONS(56),
    [anon_sym_TILDE] = ACTIONS(58),
    [anon_sym_PERCENT] = ACTIONS(60),
    [anon_sym_POUND] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [sym_int] = ACTIONS(66),
    [sym_hex] = ACTIONS(66),
    [sym_float] = ACTIONS(66),
    [sym_symbol] = ACTIONS(68),
  },
  [8] = {
    [sym_list] = STATE(6),
    [sym__expr] = STATE(6),
    [sym_reader_macro] = STATE(6),
    [sym_m_quote] = STATE(18),
    [sym_m_quasiquote] = STATE(18),
    [sym_m_unquote_splicing] = STATE(18),
    [sym_m_unquote] = STATE(18),
    [sym_m_get] = STATE(18),
    [sym_m_dispatch] = STATE(18),
    [sym_string] = STATE(6),
    [sym_number] = STATE(6),
    [aux_sym_list_repeat1] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_LBRACK] = ACTIONS(50),
    [anon_sym_RBRACK] = ACTIONS(78),
    [anon_sym_SQUOTE] = ACTIONS(52),
    [anon_sym_BQUOTE] = ACTIONS(54),
    [anon_sym_TILDE_AT] = ACTIONS(56),
    [anon_sym_TILDE] = ACTIONS(58),
    [anon_sym_PERCENT] = ACTIONS(60),
    [anon_sym_POUND] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [sym_int] = ACTIONS(66),
    [sym_hex] = ACTIONS(66),
    [sym_float] = ACTIONS(66),
    [sym_symbol] = ACTIONS(80),
  },
  [9] = {
    [sym_list] = STATE(7),
    [sym__expr] = STATE(7),
    [sym_reader_macro] = STATE(7),
    [sym_m_quote] = STATE(18),
    [sym_m_quasiquote] = STATE(18),
    [sym_m_unquote_splicing] = STATE(18),
    [sym_m_unquote] = STATE(18),
    [sym_m_get] = STATE(18),
    [sym_m_dispatch] = STATE(18),
    [sym_string] = STATE(7),
    [sym_number] = STATE(7),
    [aux_sym_list_repeat1] = STATE(7),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(50),
    [anon_sym_SQUOTE] = ACTIONS(52),
    [anon_sym_BQUOTE] = ACTIONS(54),
    [anon_sym_TILDE_AT] = ACTIONS(56),
    [anon_sym_TILDE] = ACTIONS(58),
    [anon_sym_PERCENT] = ACTIONS(60),
    [anon_sym_POUND] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [sym_int] = ACTIONS(66),
    [sym_hex] = ACTIONS(66),
    [sym_float] = ACTIONS(66),
    [sym_symbol] = ACTIONS(82),
  },
  [10] = {
    [sym_list] = STATE(2),
    [sym__expr] = STATE(2),
    [sym_reader_macro] = STATE(2),
    [sym_m_quote] = STATE(18),
    [sym_m_quasiquote] = STATE(18),
    [sym_m_unquote_splicing] = STATE(18),
    [sym_m_unquote] = STATE(18),
    [sym_m_get] = STATE(18),
    [sym_m_dispatch] = STATE(18),
    [sym_string] = STATE(2),
    [sym_number] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_LBRACK] = ACTIONS(50),
    [anon_sym_RBRACK] = ACTIONS(48),
    [anon_sym_SQUOTE] = ACTIONS(52),
    [anon_sym_BQUOTE] = ACTIONS(54),
    [anon_sym_TILDE_AT] = ACTIONS(56),
    [anon_sym_TILDE] = ACTIONS(58),
    [anon_sym_PERCENT] = ACTIONS(60),
    [anon_sym_POUND] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [sym_int] = ACTIONS(66),
    [sym_hex] = ACTIONS(66),
    [sym_float] = ACTIONS(66),
    [sym_symbol] = ACTIONS(68),
  },
  [11] = {
    [sym_list] = STATE(19),
    [sym__expr] = STATE(19),
    [sym_reader_macro] = STATE(19),
    [sym_m_quote] = STATE(18),
    [sym_m_quasiquote] = STATE(18),
    [sym_m_unquote_splicing] = STATE(18),
    [sym_m_unquote] = STATE(18),
    [sym_m_get] = STATE(18),
    [sym_m_dispatch] = STATE(18),
    [sym_string] = STATE(19),
    [sym_number] = STATE(19),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_LBRACK] = ACTIONS(50),
    [anon_sym_SQUOTE] = ACTIONS(52),
    [anon_sym_BQUOTE] = ACTIONS(54),
    [anon_sym_TILDE_AT] = ACTIONS(56),
    [anon_sym_TILDE] = ACTIONS(58),
    [anon_sym_PERCENT] = ACTIONS(60),
    [anon_sym_POUND] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [sym_int] = ACTIONS(66),
    [sym_hex] = ACTIONS(66),
    [sym_float] = ACTIONS(66),
    [sym_symbol] = ACTIONS(84),
  },
  [12] = {
    [sym_list] = STATE(20),
    [sym__expr] = STATE(20),
    [sym_reader_macro] = STATE(20),
    [sym_m_quote] = STATE(18),
    [sym_m_quasiquote] = STATE(18),
    [sym_m_unquote_splicing] = STATE(18),
    [sym_m_unquote] = STATE(18),
    [sym_m_get] = STATE(18),
    [sym_m_dispatch] = STATE(18),
    [sym_string] = STATE(20),
    [sym_number] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_LBRACK] = ACTIONS(50),
    [anon_sym_SQUOTE] = ACTIONS(52),
    [anon_sym_BQUOTE] = ACTIONS(54),
    [anon_sym_TILDE_AT] = ACTIONS(56),
    [anon_sym_TILDE] = ACTIONS(58),
    [anon_sym_PERCENT] = ACTIONS(60),
    [anon_sym_POUND] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [sym_int] = ACTIONS(66),
    [sym_hex] = ACTIONS(66),
    [sym_float] = ACTIONS(66),
    [sym_symbol] = ACTIONS(86),
  },
  [13] = {
    [sym_list] = STATE(21),
    [sym__expr] = STATE(21),
    [sym_reader_macro] = STATE(21),
    [sym_m_quote] = STATE(18),
    [sym_m_quasiquote] = STATE(18),
    [sym_m_unquote_splicing] = STATE(18),
    [sym_m_unquote] = STATE(18),
    [sym_m_get] = STATE(18),
    [sym_m_dispatch] = STATE(18),
    [sym_string] = STATE(21),
    [sym_number] = STATE(21),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_LBRACK] = ACTIONS(50),
    [anon_sym_SQUOTE] = ACTIONS(52),
    [anon_sym_BQUOTE] = ACTIONS(54),
    [anon_sym_TILDE_AT] = ACTIONS(56),
    [anon_sym_TILDE] = ACTIONS(58),
    [anon_sym_PERCENT] = ACTIONS(60),
    [anon_sym_POUND] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [sym_int] = ACTIONS(66),
    [sym_hex] = ACTIONS(66),
    [sym_float] = ACTIONS(66),
    [sym_symbol] = ACTIONS(88),
  },
  [14] = {
    [sym_list] = STATE(22),
    [sym__expr] = STATE(22),
    [sym_reader_macro] = STATE(22),
    [sym_m_quote] = STATE(18),
    [sym_m_quasiquote] = STATE(18),
    [sym_m_unquote_splicing] = STATE(18),
    [sym_m_unquote] = STATE(18),
    [sym_m_get] = STATE(18),
    [sym_m_dispatch] = STATE(18),
    [sym_string] = STATE(22),
    [sym_number] = STATE(22),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_LBRACK] = ACTIONS(50),
    [anon_sym_SQUOTE] = ACTIONS(52),
    [anon_sym_BQUOTE] = ACTIONS(54),
    [anon_sym_TILDE_AT] = ACTIONS(56),
    [anon_sym_TILDE] = ACTIONS(58),
    [anon_sym_PERCENT] = ACTIONS(60),
    [anon_sym_POUND] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [sym_int] = ACTIONS(66),
    [sym_hex] = ACTIONS(66),
    [sym_float] = ACTIONS(66),
    [sym_symbol] = ACTIONS(90),
  },
  [15] = {
    [sym_list] = STATE(23),
    [sym__expr] = STATE(23),
    [sym_reader_macro] = STATE(23),
    [sym_m_quote] = STATE(18),
    [sym_m_quasiquote] = STATE(18),
    [sym_m_unquote_splicing] = STATE(18),
    [sym_m_unquote] = STATE(18),
    [sym_m_get] = STATE(18),
    [sym_m_dispatch] = STATE(18),
    [sym_string] = STATE(23),
    [sym_number] = STATE(23),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_LBRACK] = ACTIONS(50),
    [anon_sym_SQUOTE] = ACTIONS(52),
    [anon_sym_BQUOTE] = ACTIONS(54),
    [anon_sym_TILDE_AT] = ACTIONS(56),
    [anon_sym_TILDE] = ACTIONS(58),
    [anon_sym_PERCENT] = ACTIONS(60),
    [anon_sym_POUND] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [sym_int] = ACTIONS(66),
    [sym_hex] = ACTIONS(66),
    [sym_float] = ACTIONS(66),
    [sym_symbol] = ACTIONS(92),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(96), 5,
      anon_sym_TILDE,
      sym_int,
      sym_hex,
      sym_float,
      sym_symbol,
    ACTIONS(94), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [20] = 2,
    ACTIONS(100), 5,
      anon_sym_TILDE,
      sym_int,
      sym_hex,
      sym_float,
      sym_symbol,
    ACTIONS(98), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [40] = 2,
    ACTIONS(104), 5,
      anon_sym_TILDE,
      sym_int,
      sym_hex,
      sym_float,
      sym_symbol,
    ACTIONS(102), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [60] = 2,
    ACTIONS(108), 5,
      anon_sym_TILDE,
      sym_int,
      sym_hex,
      sym_float,
      sym_symbol,
    ACTIONS(106), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [80] = 2,
    ACTIONS(112), 5,
      anon_sym_TILDE,
      sym_int,
      sym_hex,
      sym_float,
      sym_symbol,
    ACTIONS(110), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [100] = 2,
    ACTIONS(116), 5,
      anon_sym_TILDE,
      sym_int,
      sym_hex,
      sym_float,
      sym_symbol,
    ACTIONS(114), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [120] = 2,
    ACTIONS(120), 5,
      anon_sym_TILDE,
      sym_int,
      sym_hex,
      sym_float,
      sym_symbol,
    ACTIONS(118), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [140] = 2,
    ACTIONS(124), 5,
      anon_sym_TILDE,
      sym_int,
      sym_hex,
      sym_float,
      sym_symbol,
    ACTIONS(122), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [160] = 2,
    ACTIONS(128), 5,
      anon_sym_TILDE,
      sym_int,
      sym_hex,
      sym_float,
      sym_symbol,
    ACTIONS(126), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [180] = 2,
    ACTIONS(132), 5,
      anon_sym_TILDE,
      sym_int,
      sym_hex,
      sym_float,
      sym_symbol,
    ACTIONS(130), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [200] = 2,
    ACTIONS(136), 5,
      anon_sym_TILDE,
      sym_int,
      sym_hex,
      sym_float,
      sym_symbol,
    ACTIONS(134), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [220] = 2,
    ACTIONS(140), 5,
      anon_sym_TILDE,
      sym_int,
      sym_hex,
      sym_float,
      sym_symbol,
    ACTIONS(138), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [240] = 4,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      sym_list,
    ACTIONS(142), 5,
      anon_sym_t,
      anon_sym_f,
      anon_sym_inf,
      anon_sym_DASHinf,
      anon_sym_nan,
  [257] = 5,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    ACTIONS(146), 1,
      sym_freetext,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      anon_sym_LBRACK,
    STATE(29), 2,
      sym_list,
      aux_sym_source_file_repeat1,
  [274] = 5,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    ACTIONS(157), 1,
      sym_freetext,
    STATE(29), 2,
      sym_list,
      aux_sym_source_file_repeat1,
  [291] = 4,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      sym_string_text,
    ACTIONS(164), 1,
      sym_string_escape,
    STATE(31), 1,
      aux_sym_string_repeat1,
  [304] = 4,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      sym_string_text,
    ACTIONS(171), 1,
      sym_string_escape,
    STATE(31), 1,
      aux_sym_string_repeat1,
  [317] = 2,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      sym_freetext,
    ACTIONS(100), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [326] = 4,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym_string_text,
    ACTIONS(177), 1,
      sym_string_escape,
    STATE(32), 1,
      aux_sym_string_repeat1,
  [339] = 2,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      sym_freetext,
    ACTIONS(140), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [348] = 1,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
  [SMALL_STATE(17)] = 20,
  [SMALL_STATE(18)] = 40,
  [SMALL_STATE(19)] = 60,
  [SMALL_STATE(20)] = 80,
  [SMALL_STATE(21)] = 100,
  [SMALL_STATE(22)] = 120,
  [SMALL_STATE(23)] = 140,
  [SMALL_STATE(24)] = 160,
  [SMALL_STATE(25)] = 180,
  [SMALL_STATE(26)] = 200,
  [SMALL_STATE(27)] = 220,
  [SMALL_STATE(28)] = 240,
  [SMALL_STATE(29)] = 257,
  [SMALL_STATE(30)] = 274,
  [SMALL_STATE(31)] = 291,
  [SMALL_STATE(32)] = 304,
  [SMALL_STATE(33)] = 317,
  [SMALL_STATE(34)] = 326,
  [SMALL_STATE(35)] = 339,
  [SMALL_STATE(36)] = 348,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(9),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(8),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(11),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(12),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(13),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(14),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(15),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(28),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(34),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(16),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reader_macro, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reader_macro, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_quote, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_quote, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_quasiquote, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_quasiquote, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_unquote_splicing, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_unquote_splicing, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_unquote, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_unquote, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_get, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_get, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_dispatch, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_dispatch, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(31),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(31),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [179] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
