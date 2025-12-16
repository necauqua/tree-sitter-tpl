#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 43
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
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
  aux_sym_string_token1 = 19,
  anon_sym_BSLASH = 20,
  anon_sym_n = 21,
  anon_sym_u = 22,
  anon_sym_LBRACE = 23,
  aux_sym_string_escape_unicode_token1 = 24,
  anon_sym_RBRACE = 25,
  sym_int = 26,
  sym_hex = 27,
  sym_float = 28,
  sym_symbol = 29,
  sym_source_file = 30,
  sym_list = 31,
  sym__expr = 32,
  sym_reader_macro = 33,
  sym_m_quote = 34,
  sym_m_quasiquote = 35,
  sym_m_unquote_splicing = 36,
  sym_m_unquote = 37,
  sym_m_get = 38,
  sym_m_dispatch = 39,
  sym_string = 40,
  sym_string_escape = 41,
  sym_string_escape_unicode = 42,
  sym_number = 43,
  aux_sym_source_file_repeat1 = 44,
  aux_sym_list_repeat1 = 45,
  aux_sym_string_repeat1 = 46,
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
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_n] = "n",
  [anon_sym_u] = "u",
  [anon_sym_LBRACE] = "{",
  [aux_sym_string_escape_unicode_token1] = "string_escape_unicode_token1",
  [anon_sym_RBRACE] = "}",
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
  [sym_string_escape] = "string_escape",
  [sym_string_escape_unicode] = "string_escape_unicode",
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
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_n] = anon_sym_n,
  [anon_sym_u] = anon_sym_u,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_string_escape_unicode_token1] = aux_sym_string_escape_unicode_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [sym_string_escape] = sym_string_escape,
  [sym_string_escape_unicode] = sym_string_escape_unicode,
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
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_n] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_escape_unicode_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
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
  [sym_string_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_string_escape_unicode] = {
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
  [33] = 33,
  [34] = 34,
  [35] = 19,
  [36] = 26,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
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
      if (eof) ADVANCE(18);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '0') ADVANCE(52);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '[') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == ']') ADVANCE(26);
      if (lookahead == '`') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(42);
      if (lookahead == 't') ADVANCE(33);
      if (lookahead == 'u') ADVANCE(43);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '}') ADVANCE(51);
      if (lookahead == '~') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '0') ADVANCE(54);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '[') ADVANCE(25);
      if (lookahead == ']') ADVANCE(26);
      if (lookahead == '`') ADVANCE(28);
      if (lookahead == '~') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '[') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(8);
      if (lookahead == 't') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '0') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(14);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(58);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(58);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 7:
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 10:
      if (lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '[') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(20);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_freetext);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_freetext);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ';') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_TILDE_AT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '@') ADVANCE(29);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_inf);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DASHinf);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_nan);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(39);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_string_escape_unicode_token1);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_string_escape_unicode_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_string_escape_unicode_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_string_escape_unicode_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_string_escape_unicode_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_string_escape_unicode_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == 'x') ADVANCE(16);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == 'x') ADVANCE(68);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(69);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(69);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(69);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(69);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(69);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_float);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(69);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '0') ADVANCE(54);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(69);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(66);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(69);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '0') ADVANCE(63);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(69);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_symbol);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(69);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 17},
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
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 17},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 17},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 17},
  [36] = {.lex_state = 17},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 7},
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
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_n] = ACTIONS(1),
    [anon_sym_u] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [sym_hex] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(39),
    [sym_list] = STATE(29),
    [aux_sym_source_file_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_freetext] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
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
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_int] = ACTIONS(44),
    [sym_hex] = ACTIONS(44),
    [sym_float] = ACTIONS(44),
    [sym_symbol] = ACTIONS(47),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_RPAREN] = ACTIONS(52),
    [anon_sym_LBRACK] = ACTIONS(54),
    [anon_sym_SQUOTE] = ACTIONS(56),
    [anon_sym_BQUOTE] = ACTIONS(58),
    [anon_sym_TILDE_AT] = ACTIONS(60),
    [anon_sym_TILDE] = ACTIONS(62),
    [anon_sym_PERCENT] = ACTIONS(64),
    [anon_sym_POUND] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [sym_int] = ACTIONS(70),
    [sym_hex] = ACTIONS(70),
    [sym_float] = ACTIONS(70),
    [sym_symbol] = ACTIONS(72),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_RPAREN] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(54),
    [anon_sym_SQUOTE] = ACTIONS(56),
    [anon_sym_BQUOTE] = ACTIONS(58),
    [anon_sym_TILDE_AT] = ACTIONS(60),
    [anon_sym_TILDE] = ACTIONS(62),
    [anon_sym_PERCENT] = ACTIONS(64),
    [anon_sym_POUND] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [sym_int] = ACTIONS(70),
    [sym_hex] = ACTIONS(70),
    [sym_float] = ACTIONS(70),
    [sym_symbol] = ACTIONS(76),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(54),
    [anon_sym_RBRACK] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(56),
    [anon_sym_BQUOTE] = ACTIONS(58),
    [anon_sym_TILDE_AT] = ACTIONS(60),
    [anon_sym_TILDE] = ACTIONS(62),
    [anon_sym_PERCENT] = ACTIONS(64),
    [anon_sym_POUND] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [sym_int] = ACTIONS(70),
    [sym_hex] = ACTIONS(70),
    [sym_float] = ACTIONS(70),
    [sym_symbol] = ACTIONS(78),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(54),
    [anon_sym_RBRACK] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(56),
    [anon_sym_BQUOTE] = ACTIONS(58),
    [anon_sym_TILDE_AT] = ACTIONS(60),
    [anon_sym_TILDE] = ACTIONS(62),
    [anon_sym_PERCENT] = ACTIONS(64),
    [anon_sym_POUND] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [sym_int] = ACTIONS(70),
    [sym_hex] = ACTIONS(70),
    [sym_float] = ACTIONS(70),
    [sym_symbol] = ACTIONS(72),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_RPAREN] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(54),
    [anon_sym_SQUOTE] = ACTIONS(56),
    [anon_sym_BQUOTE] = ACTIONS(58),
    [anon_sym_TILDE_AT] = ACTIONS(60),
    [anon_sym_TILDE] = ACTIONS(62),
    [anon_sym_PERCENT] = ACTIONS(64),
    [anon_sym_POUND] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [sym_int] = ACTIONS(70),
    [sym_hex] = ACTIONS(70),
    [sym_float] = ACTIONS(70),
    [sym_symbol] = ACTIONS(72),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(54),
    [anon_sym_RBRACK] = ACTIONS(82),
    [anon_sym_SQUOTE] = ACTIONS(56),
    [anon_sym_BQUOTE] = ACTIONS(58),
    [anon_sym_TILDE_AT] = ACTIONS(60),
    [anon_sym_TILDE] = ACTIONS(62),
    [anon_sym_PERCENT] = ACTIONS(64),
    [anon_sym_POUND] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [sym_int] = ACTIONS(70),
    [sym_hex] = ACTIONS(70),
    [sym_float] = ACTIONS(70),
    [sym_symbol] = ACTIONS(84),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_RPAREN] = ACTIONS(82),
    [anon_sym_LBRACK] = ACTIONS(54),
    [anon_sym_SQUOTE] = ACTIONS(56),
    [anon_sym_BQUOTE] = ACTIONS(58),
    [anon_sym_TILDE_AT] = ACTIONS(60),
    [anon_sym_TILDE] = ACTIONS(62),
    [anon_sym_PERCENT] = ACTIONS(64),
    [anon_sym_POUND] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [sym_int] = ACTIONS(70),
    [sym_hex] = ACTIONS(70),
    [sym_float] = ACTIONS(70),
    [sym_symbol] = ACTIONS(86),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(54),
    [anon_sym_RBRACK] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(56),
    [anon_sym_BQUOTE] = ACTIONS(58),
    [anon_sym_TILDE_AT] = ACTIONS(60),
    [anon_sym_TILDE] = ACTIONS(62),
    [anon_sym_PERCENT] = ACTIONS(64),
    [anon_sym_POUND] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [sym_int] = ACTIONS(70),
    [sym_hex] = ACTIONS(70),
    [sym_float] = ACTIONS(70),
    [sym_symbol] = ACTIONS(72),
  },
  [11] = {
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(54),
    [anon_sym_SQUOTE] = ACTIONS(56),
    [anon_sym_BQUOTE] = ACTIONS(58),
    [anon_sym_TILDE_AT] = ACTIONS(60),
    [anon_sym_TILDE] = ACTIONS(62),
    [anon_sym_PERCENT] = ACTIONS(64),
    [anon_sym_POUND] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [sym_int] = ACTIONS(70),
    [sym_hex] = ACTIONS(70),
    [sym_float] = ACTIONS(70),
    [sym_symbol] = ACTIONS(88),
  },
  [12] = {
    [sym_list] = STATE(16),
    [sym__expr] = STATE(16),
    [sym_reader_macro] = STATE(16),
    [sym_m_quote] = STATE(18),
    [sym_m_quasiquote] = STATE(18),
    [sym_m_unquote_splicing] = STATE(18),
    [sym_m_unquote] = STATE(18),
    [sym_m_get] = STATE(18),
    [sym_m_dispatch] = STATE(18),
    [sym_string] = STATE(16),
    [sym_number] = STATE(16),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(54),
    [anon_sym_SQUOTE] = ACTIONS(56),
    [anon_sym_BQUOTE] = ACTIONS(58),
    [anon_sym_TILDE_AT] = ACTIONS(60),
    [anon_sym_TILDE] = ACTIONS(62),
    [anon_sym_PERCENT] = ACTIONS(64),
    [anon_sym_POUND] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [sym_int] = ACTIONS(70),
    [sym_hex] = ACTIONS(70),
    [sym_float] = ACTIONS(70),
    [sym_symbol] = ACTIONS(90),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(54),
    [anon_sym_SQUOTE] = ACTIONS(56),
    [anon_sym_BQUOTE] = ACTIONS(58),
    [anon_sym_TILDE_AT] = ACTIONS(60),
    [anon_sym_TILDE] = ACTIONS(62),
    [anon_sym_PERCENT] = ACTIONS(64),
    [anon_sym_POUND] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [sym_int] = ACTIONS(70),
    [sym_hex] = ACTIONS(70),
    [sym_float] = ACTIONS(70),
    [sym_symbol] = ACTIONS(92),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(54),
    [anon_sym_SQUOTE] = ACTIONS(56),
    [anon_sym_BQUOTE] = ACTIONS(58),
    [anon_sym_TILDE_AT] = ACTIONS(60),
    [anon_sym_TILDE] = ACTIONS(62),
    [anon_sym_PERCENT] = ACTIONS(64),
    [anon_sym_POUND] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [sym_int] = ACTIONS(70),
    [sym_hex] = ACTIONS(70),
    [sym_float] = ACTIONS(70),
    [sym_symbol] = ACTIONS(94),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(54),
    [anon_sym_SQUOTE] = ACTIONS(56),
    [anon_sym_BQUOTE] = ACTIONS(58),
    [anon_sym_TILDE_AT] = ACTIONS(60),
    [anon_sym_TILDE] = ACTIONS(62),
    [anon_sym_PERCENT] = ACTIONS(64),
    [anon_sym_POUND] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [sym_int] = ACTIONS(70),
    [sym_hex] = ACTIONS(70),
    [sym_float] = ACTIONS(70),
    [sym_symbol] = ACTIONS(96),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [23] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [46] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [69] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [92] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [115] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [138] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [161] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [184] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [207] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [230] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 5,
      anon_sym_TILDE,
      sym_int,
      sym_hex,
      sym_float,
      sym_symbol,
    ACTIONS(142), 10,
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
  [276] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      sym_list,
    ACTIONS(146), 5,
      anon_sym_t,
      anon_sym_f,
      anon_sym_inf,
      anon_sym_DASHinf,
      anon_sym_nan,
  [296] = 6,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(150), 1,
      sym_freetext,
    STATE(31), 2,
      sym_list,
      aux_sym_source_file_repeat1,
  [316] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_u,
    STATE(37), 1,
      sym_string_escape_unicode,
    ACTIONS(152), 4,
      anon_sym_t,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      anon_sym_n,
  [332] = 6,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    ACTIONS(158), 1,
      sym_freetext,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      anon_sym_LBRACK,
    STATE(31), 2,
      sym_list,
      aux_sym_source_file_repeat1,
  [352] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      aux_sym_string_token1,
    ACTIONS(171), 1,
      anon_sym_BSLASH,
    STATE(34), 2,
      sym_string_escape,
      aux_sym_string_repeat1,
  [369] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_BSLASH,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      aux_sym_string_token1,
    STATE(32), 2,
      sym_string_escape,
      aux_sym_string_repeat1,
  [386] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    ACTIONS(179), 1,
      aux_sym_string_token1,
    ACTIONS(182), 1,
      anon_sym_BSLASH,
    STATE(34), 2,
      sym_string_escape,
      aux_sym_string_repeat1,
  [403] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      sym_freetext,
    ACTIONS(112), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [415] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      sym_freetext,
    ACTIONS(140), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [427] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(185), 3,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH,
  [436] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(187), 3,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH,
  [445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
  [452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
  [459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
  [466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      aux_sym_string_escape_unicode_token1,
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
  [SMALL_STATE(28)] = 276,
  [SMALL_STATE(29)] = 296,
  [SMALL_STATE(30)] = 316,
  [SMALL_STATE(31)] = 332,
  [SMALL_STATE(32)] = 352,
  [SMALL_STATE(33)] = 369,
  [SMALL_STATE(34)] = 386,
  [SMALL_STATE(35)] = 403,
  [SMALL_STATE(36)] = 415,
  [SMALL_STATE(37)] = 427,
  [SMALL_STATE(38)] = 436,
  [SMALL_STATE(39)] = 445,
  [SMALL_STATE(40)] = 452,
  [SMALL_STATE(41)] = 459,
  [SMALL_STATE(42)] = 466,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(9),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(8),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(11),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(12),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(13),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(14),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(15),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(28),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(33),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(27),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_quasiquote, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_quasiquote, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reader_macro, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reader_macro, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_quote, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_quote, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_unquote_splicing, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_unquote_splicing, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_unquote, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_unquote, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_get, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_get, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_dispatch, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_dispatch, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(34),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(30),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_escape, 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_escape_unicode, 4),
  [189] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
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
