#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 64
#define LARGE_STATE_COUNT 28
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_source_file_token1 = 1,
  aux_sym_command_token1 = 2,
  sym_freetext = 3,
  sym_comment = 4,
  anon_sym_LPAREN = 5,
  aux_sym_list_token1 = 6,
  anon_sym_RPAREN = 7,
  anon_sym_LBRACK = 8,
  anon_sym_RBRACK = 9,
  anon_sym_SQUOTE = 10,
  anon_sym_BQUOTE = 11,
  anon_sym_TILDE_AT = 12,
  anon_sym_TILDE = 13,
  anon_sym_PERCENT = 14,
  anon_sym_POUND = 15,
  anon_sym_t = 16,
  anon_sym_f = 17,
  anon_sym_inf = 18,
  anon_sym_DASHinf = 19,
  anon_sym_nan = 20,
  anon_sym_DQUOTE = 21,
  sym_string_text = 22,
  sym_string_escape = 23,
  sym_int = 24,
  sym_hex = 25,
  sym_float = 26,
  sym_symbol = 27,
  sym_command_symbol = 28,
  sym_source_file = 29,
  sym_command = 30,
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
  sym_number = 41,
  aux_sym_source_file_repeat1 = 42,
  aux_sym_command_repeat1 = 43,
  aux_sym_list_repeat1 = 44,
  aux_sym_string_repeat1 = 45,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [aux_sym_command_token1] = "command_token1",
  [sym_freetext] = "freetext",
  [sym_comment] = "comment",
  [anon_sym_LPAREN] = "(",
  [aux_sym_list_token1] = "list_token1",
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
  [sym_command_symbol] = "command_symbol",
  [sym_source_file] = "source_file",
  [sym_command] = "command",
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
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_file_token1] = aux_sym_source_file_token1,
  [aux_sym_command_token1] = aux_sym_command_token1,
  [sym_freetext] = sym_freetext,
  [sym_comment] = sym_comment,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_list_token1] = aux_sym_list_token1,
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
  [sym_command_symbol] = sym_command_symbol,
  [sym_source_file] = sym_source_file,
  [sym_command] = sym_command,
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
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_token1] = {
    .visible = false,
    .named = false,
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
  [aux_sym_list_token1] = {
    .visible = false,
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
  [sym_command_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
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
  [aux_sym_command_repeat1] = {
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
  [7] = 7,
  [8] = 8,
  [9] = 6,
  [10] = 10,
  [11] = 8,
  [12] = 7,
  [13] = 8,
  [14] = 7,
  [15] = 6,
  [16] = 10,
  [17] = 10,
  [18] = 18,
  [19] = 19,
  [20] = 19,
  [21] = 21,
  [22] = 18,
  [23] = 23,
  [24] = 24,
  [25] = 24,
  [26] = 21,
  [27] = 23,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 34,
  [41] = 29,
  [42] = 28,
  [43] = 31,
  [44] = 35,
  [45] = 32,
  [46] = 33,
  [47] = 30,
  [48] = 39,
  [49] = 38,
  [50] = 37,
  [51] = 36,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 54,
  [56] = 29,
  [57] = 31,
  [58] = 58,
  [59] = 59,
  [60] = 58,
  [61] = 59,
  [62] = 62,
  [63] = 63,
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
      if (eof) ADVANCE(22);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(24);
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == '%') ADVANCE(50);
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '0') ADVANCE(60);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == '`') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(29);
      if (lookahead == 't') ADVANCE(52);
      if (lookahead == '~') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == '%') ADVANCE(50);
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '0') ADVANCE(62);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == '`') ADVANCE(47);
      if (lookahead == '~') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(58);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(4);
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == 'f') ADVANCE(54);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 11:
      if (lookahead == '{') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == '}') ADVANCE(59);
      END_STATE();
    case 13:
      if (lookahead == '}') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '}') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '}') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '}') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '}') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(59);
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 20:
      if (eof) ADVANCE(22);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(24);
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(24);
      if (lookahead == '!') ADVANCE(77);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == '%') ADVANCE(50);
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '0') ADVANCE(62);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == '`') ADVANCE(47);
      if (lookahead == '~') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(38);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\n') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\r') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_command_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_freetext);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '0') ADVANCE(60);
      if (lookahead == 'i') ADVANCE(34);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_freetext);
      if (lookahead == '0') ADVANCE(66);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_freetext);
      if (lookahead == '0') ADVANCE(66);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_freetext);
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_freetext);
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_freetext);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_freetext);
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_freetext);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_freetext);
      if (lookahead == 'n') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_freetext);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_freetext);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_freetext);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_freetext);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_list_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_TILDE_AT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '@') ADVANCE(48);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_inf);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DASHinf);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_nan);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_string_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_string_escape);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'x') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == 'x') ADVANCE(76);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(77);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(77);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(77);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(77);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(77);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_float);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(77);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '0') ADVANCE(62);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(77);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(74);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(77);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '0') ADVANCE(71);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(77);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_symbol);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_command_symbol);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 21},
  [3] = {.lex_state = 21},
  [4] = {.lex_state = 21},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 21},
  [19] = {.lex_state = 21},
  [20] = {.lex_state = 21},
  [21] = {.lex_state = 21},
  [22] = {.lex_state = 21},
  [23] = {.lex_state = 21},
  [24] = {.lex_state = 21},
  [25] = {.lex_state = 21},
  [26] = {.lex_state = 21},
  [27] = {.lex_state = 21},
  [28] = {.lex_state = 21},
  [29] = {.lex_state = 21},
  [30] = {.lex_state = 21},
  [31] = {.lex_state = 21},
  [32] = {.lex_state = 21},
  [33] = {.lex_state = 21},
  [34] = {.lex_state = 21},
  [35] = {.lex_state = 21},
  [36] = {.lex_state = 21},
  [37] = {.lex_state = 21},
  [38] = {.lex_state = 21},
  [39] = {.lex_state = 21},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 20},
  [53] = {.lex_state = 20},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 20},
  [57] = {.lex_state = 20},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_file_token1] = ACTIONS(1),
    [aux_sym_command_token1] = ACTIONS(1),
    [sym_freetext] = ACTIONS(1),
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
    [sym_int] = ACTIONS(1),
    [sym_hex] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_command_symbol] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(63),
    [sym_command] = STATE(53),
    [sym_list] = STATE(53),
    [aux_sym_source_file_repeat1] = STATE(53),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_source_file_token1] = ACTIONS(5),
    [sym_freetext] = ACTIONS(7),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_command_symbol] = ACTIONS(13),
  },
  [2] = {
    [sym_list] = STATE(4),
    [sym__expr] = STATE(4),
    [sym_reader_macro] = STATE(4),
    [sym_m_quote] = STATE(35),
    [sym_m_quasiquote] = STATE(35),
    [sym_m_unquote_splicing] = STATE(35),
    [sym_m_unquote] = STATE(35),
    [sym_m_get] = STATE(35),
    [sym_m_dispatch] = STATE(35),
    [sym_string] = STATE(4),
    [sym_number] = STATE(4),
    [aux_sym_command_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(15),
    [aux_sym_source_file_token1] = ACTIONS(15),
    [aux_sym_command_token1] = ACTIONS(17),
    [sym_freetext] = ACTIONS(19),
    [sym_comment] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_TILDE_AT] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_PERCENT] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_int] = ACTIONS(39),
    [sym_hex] = ACTIONS(39),
    [sym_float] = ACTIONS(39),
    [sym_symbol] = ACTIONS(41),
    [sym_command_symbol] = ACTIONS(19),
  },
  [3] = {
    [sym_list] = STATE(3),
    [sym__expr] = STATE(3),
    [sym_reader_macro] = STATE(3),
    [sym_m_quote] = STATE(35),
    [sym_m_quasiquote] = STATE(35),
    [sym_m_unquote_splicing] = STATE(35),
    [sym_m_unquote] = STATE(35),
    [sym_m_get] = STATE(35),
    [sym_m_dispatch] = STATE(35),
    [sym_string] = STATE(3),
    [sym_number] = STATE(3),
    [aux_sym_command_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(43),
    [aux_sym_source_file_token1] = ACTIONS(43),
    [aux_sym_command_token1] = ACTIONS(45),
    [sym_freetext] = ACTIONS(48),
    [sym_comment] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(56),
    [anon_sym_BQUOTE] = ACTIONS(59),
    [anon_sym_TILDE_AT] = ACTIONS(62),
    [anon_sym_TILDE] = ACTIONS(65),
    [anon_sym_PERCENT] = ACTIONS(68),
    [anon_sym_POUND] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(74),
    [sym_int] = ACTIONS(77),
    [sym_hex] = ACTIONS(77),
    [sym_float] = ACTIONS(77),
    [sym_symbol] = ACTIONS(80),
    [sym_command_symbol] = ACTIONS(48),
  },
  [4] = {
    [sym_list] = STATE(3),
    [sym__expr] = STATE(3),
    [sym_reader_macro] = STATE(3),
    [sym_m_quote] = STATE(35),
    [sym_m_quasiquote] = STATE(35),
    [sym_m_unquote_splicing] = STATE(35),
    [sym_m_unquote] = STATE(35),
    [sym_m_get] = STATE(35),
    [sym_m_dispatch] = STATE(35),
    [sym_string] = STATE(3),
    [sym_number] = STATE(3),
    [aux_sym_command_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(83),
    [aux_sym_source_file_token1] = ACTIONS(83),
    [aux_sym_command_token1] = ACTIONS(85),
    [sym_freetext] = ACTIONS(87),
    [sym_comment] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_TILDE_AT] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_PERCENT] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_int] = ACTIONS(39),
    [sym_hex] = ACTIONS(39),
    [sym_float] = ACTIONS(39),
    [sym_symbol] = ACTIONS(89),
    [sym_command_symbol] = ACTIONS(87),
  },
  [5] = {
    [sym_list] = STATE(5),
    [sym__expr] = STATE(5),
    [sym_reader_macro] = STATE(5),
    [sym_m_quote] = STATE(44),
    [sym_m_quasiquote] = STATE(44),
    [sym_m_unquote_splicing] = STATE(44),
    [sym_m_unquote] = STATE(44),
    [sym_m_get] = STATE(44),
    [sym_m_dispatch] = STATE(44),
    [sym_string] = STATE(5),
    [sym_number] = STATE(5),
    [aux_sym_list_repeat1] = STATE(5),
    [sym_comment] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(94),
    [aux_sym_list_token1] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_RBRACK] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(102),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_TILDE_AT] = ACTIONS(108),
    [anon_sym_TILDE] = ACTIONS(111),
    [anon_sym_PERCENT] = ACTIONS(114),
    [anon_sym_POUND] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(120),
    [sym_int] = ACTIONS(123),
    [sym_hex] = ACTIONS(123),
    [sym_float] = ACTIONS(123),
    [sym_symbol] = ACTIONS(126),
  },
  [6] = {
    [sym_list] = STATE(5),
    [sym__expr] = STATE(5),
    [sym_reader_macro] = STATE(5),
    [sym_m_quote] = STATE(44),
    [sym_m_quasiquote] = STATE(44),
    [sym_m_unquote_splicing] = STATE(44),
    [sym_m_unquote] = STATE(44),
    [sym_m_get] = STATE(44),
    [sym_m_dispatch] = STATE(44),
    [sym_string] = STATE(5),
    [sym_number] = STATE(5),
    [aux_sym_list_repeat1] = STATE(5),
    [sym_comment] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(131),
    [aux_sym_list_token1] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(135),
    [anon_sym_SQUOTE] = ACTIONS(137),
    [anon_sym_BQUOTE] = ACTIONS(139),
    [anon_sym_TILDE_AT] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(145),
    [anon_sym_POUND] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [sym_int] = ACTIONS(151),
    [sym_hex] = ACTIONS(151),
    [sym_float] = ACTIONS(151),
    [sym_symbol] = ACTIONS(153),
  },
  [7] = {
    [sym_list] = STATE(17),
    [sym__expr] = STATE(17),
    [sym_reader_macro] = STATE(17),
    [sym_m_quote] = STATE(44),
    [sym_m_quasiquote] = STATE(44),
    [sym_m_unquote_splicing] = STATE(44),
    [sym_m_unquote] = STATE(44),
    [sym_m_get] = STATE(44),
    [sym_m_dispatch] = STATE(44),
    [sym_string] = STATE(17),
    [sym_number] = STATE(17),
    [aux_sym_list_repeat1] = STATE(17),
    [sym_comment] = ACTIONS(155),
    [anon_sym_LPAREN] = ACTIONS(131),
    [aux_sym_list_token1] = ACTIONS(155),
    [anon_sym_RPAREN] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_SQUOTE] = ACTIONS(137),
    [anon_sym_BQUOTE] = ACTIONS(139),
    [anon_sym_TILDE_AT] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(145),
    [anon_sym_POUND] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [sym_int] = ACTIONS(151),
    [sym_hex] = ACTIONS(151),
    [sym_float] = ACTIONS(151),
    [sym_symbol] = ACTIONS(159),
  },
  [8] = {
    [sym_list] = STATE(6),
    [sym__expr] = STATE(6),
    [sym_reader_macro] = STATE(6),
    [sym_m_quote] = STATE(44),
    [sym_m_quasiquote] = STATE(44),
    [sym_m_unquote_splicing] = STATE(44),
    [sym_m_unquote] = STATE(44),
    [sym_m_get] = STATE(44),
    [sym_m_dispatch] = STATE(44),
    [sym_string] = STATE(6),
    [sym_number] = STATE(6),
    [aux_sym_list_repeat1] = STATE(6),
    [sym_comment] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(131),
    [aux_sym_list_token1] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(137),
    [anon_sym_BQUOTE] = ACTIONS(139),
    [anon_sym_TILDE_AT] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(145),
    [anon_sym_POUND] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [sym_int] = ACTIONS(151),
    [sym_hex] = ACTIONS(151),
    [sym_float] = ACTIONS(151),
    [sym_symbol] = ACTIONS(163),
  },
  [9] = {
    [sym_list] = STATE(5),
    [sym__expr] = STATE(5),
    [sym_reader_macro] = STATE(5),
    [sym_m_quote] = STATE(44),
    [sym_m_quasiquote] = STATE(44),
    [sym_m_unquote_splicing] = STATE(44),
    [sym_m_unquote] = STATE(44),
    [sym_m_get] = STATE(44),
    [sym_m_dispatch] = STATE(44),
    [sym_string] = STATE(5),
    [sym_number] = STATE(5),
    [aux_sym_list_repeat1] = STATE(5),
    [sym_comment] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(131),
    [aux_sym_list_token1] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(137),
    [anon_sym_BQUOTE] = ACTIONS(139),
    [anon_sym_TILDE_AT] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(145),
    [anon_sym_POUND] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [sym_int] = ACTIONS(151),
    [sym_hex] = ACTIONS(151),
    [sym_float] = ACTIONS(151),
    [sym_symbol] = ACTIONS(153),
  },
  [10] = {
    [sym_list] = STATE(5),
    [sym__expr] = STATE(5),
    [sym_reader_macro] = STATE(5),
    [sym_m_quote] = STATE(44),
    [sym_m_quasiquote] = STATE(44),
    [sym_m_unquote_splicing] = STATE(44),
    [sym_m_unquote] = STATE(44),
    [sym_m_get] = STATE(44),
    [sym_m_dispatch] = STATE(44),
    [sym_string] = STATE(5),
    [sym_number] = STATE(5),
    [aux_sym_list_repeat1] = STATE(5),
    [sym_comment] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(131),
    [aux_sym_list_token1] = ACTIONS(129),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_SQUOTE] = ACTIONS(137),
    [anon_sym_BQUOTE] = ACTIONS(139),
    [anon_sym_TILDE_AT] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(145),
    [anon_sym_POUND] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [sym_int] = ACTIONS(151),
    [sym_hex] = ACTIONS(151),
    [sym_float] = ACTIONS(151),
    [sym_symbol] = ACTIONS(153),
  },
  [11] = {
    [sym_list] = STATE(9),
    [sym__expr] = STATE(9),
    [sym_reader_macro] = STATE(9),
    [sym_m_quote] = STATE(44),
    [sym_m_quasiquote] = STATE(44),
    [sym_m_unquote_splicing] = STATE(44),
    [sym_m_unquote] = STATE(44),
    [sym_m_get] = STATE(44),
    [sym_m_dispatch] = STATE(44),
    [sym_string] = STATE(9),
    [sym_number] = STATE(9),
    [aux_sym_list_repeat1] = STATE(9),
    [sym_comment] = ACTIONS(167),
    [anon_sym_LPAREN] = ACTIONS(131),
    [aux_sym_list_token1] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(169),
    [anon_sym_SQUOTE] = ACTIONS(137),
    [anon_sym_BQUOTE] = ACTIONS(139),
    [anon_sym_TILDE_AT] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(145),
    [anon_sym_POUND] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [sym_int] = ACTIONS(151),
    [sym_hex] = ACTIONS(151),
    [sym_float] = ACTIONS(151),
    [sym_symbol] = ACTIONS(171),
  },
  [12] = {
    [sym_list] = STATE(16),
    [sym__expr] = STATE(16),
    [sym_reader_macro] = STATE(16),
    [sym_m_quote] = STATE(44),
    [sym_m_quasiquote] = STATE(44),
    [sym_m_unquote_splicing] = STATE(44),
    [sym_m_unquote] = STATE(44),
    [sym_m_get] = STATE(44),
    [sym_m_dispatch] = STATE(44),
    [sym_string] = STATE(16),
    [sym_number] = STATE(16),
    [aux_sym_list_repeat1] = STATE(16),
    [sym_comment] = ACTIONS(173),
    [anon_sym_LPAREN] = ACTIONS(131),
    [aux_sym_list_token1] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_SQUOTE] = ACTIONS(137),
    [anon_sym_BQUOTE] = ACTIONS(139),
    [anon_sym_TILDE_AT] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(145),
    [anon_sym_POUND] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [sym_int] = ACTIONS(151),
    [sym_hex] = ACTIONS(151),
    [sym_float] = ACTIONS(151),
    [sym_symbol] = ACTIONS(177),
  },
  [13] = {
    [sym_list] = STATE(15),
    [sym__expr] = STATE(15),
    [sym_reader_macro] = STATE(15),
    [sym_m_quote] = STATE(44),
    [sym_m_quasiquote] = STATE(44),
    [sym_m_unquote_splicing] = STATE(44),
    [sym_m_unquote] = STATE(44),
    [sym_m_get] = STATE(44),
    [sym_m_dispatch] = STATE(44),
    [sym_string] = STATE(15),
    [sym_number] = STATE(15),
    [aux_sym_list_repeat1] = STATE(15),
    [sym_comment] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(131),
    [aux_sym_list_token1] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(175),
    [anon_sym_SQUOTE] = ACTIONS(137),
    [anon_sym_BQUOTE] = ACTIONS(139),
    [anon_sym_TILDE_AT] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(145),
    [anon_sym_POUND] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [sym_int] = ACTIONS(151),
    [sym_hex] = ACTIONS(151),
    [sym_float] = ACTIONS(151),
    [sym_symbol] = ACTIONS(181),
  },
  [14] = {
    [sym_list] = STATE(10),
    [sym__expr] = STATE(10),
    [sym_reader_macro] = STATE(10),
    [sym_m_quote] = STATE(44),
    [sym_m_quasiquote] = STATE(44),
    [sym_m_unquote_splicing] = STATE(44),
    [sym_m_unquote] = STATE(44),
    [sym_m_get] = STATE(44),
    [sym_m_dispatch] = STATE(44),
    [sym_string] = STATE(10),
    [sym_number] = STATE(10),
    [aux_sym_list_repeat1] = STATE(10),
    [sym_comment] = ACTIONS(183),
    [anon_sym_LPAREN] = ACTIONS(131),
    [aux_sym_list_token1] = ACTIONS(183),
    [anon_sym_RPAREN] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_SQUOTE] = ACTIONS(137),
    [anon_sym_BQUOTE] = ACTIONS(139),
    [anon_sym_TILDE_AT] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(145),
    [anon_sym_POUND] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [sym_int] = ACTIONS(151),
    [sym_hex] = ACTIONS(151),
    [sym_float] = ACTIONS(151),
    [sym_symbol] = ACTIONS(185),
  },
  [15] = {
    [sym_list] = STATE(5),
    [sym__expr] = STATE(5),
    [sym_reader_macro] = STATE(5),
    [sym_m_quote] = STATE(44),
    [sym_m_quasiquote] = STATE(44),
    [sym_m_unquote_splicing] = STATE(44),
    [sym_m_unquote] = STATE(44),
    [sym_m_get] = STATE(44),
    [sym_m_dispatch] = STATE(44),
    [sym_string] = STATE(5),
    [sym_number] = STATE(5),
    [aux_sym_list_repeat1] = STATE(5),
    [sym_comment] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(131),
    [aux_sym_list_token1] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(187),
    [anon_sym_SQUOTE] = ACTIONS(137),
    [anon_sym_BQUOTE] = ACTIONS(139),
    [anon_sym_TILDE_AT] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(145),
    [anon_sym_POUND] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [sym_int] = ACTIONS(151),
    [sym_hex] = ACTIONS(151),
    [sym_float] = ACTIONS(151),
    [sym_symbol] = ACTIONS(153),
  },
  [16] = {
    [sym_list] = STATE(5),
    [sym__expr] = STATE(5),
    [sym_reader_macro] = STATE(5),
    [sym_m_quote] = STATE(44),
    [sym_m_quasiquote] = STATE(44),
    [sym_m_unquote_splicing] = STATE(44),
    [sym_m_unquote] = STATE(44),
    [sym_m_get] = STATE(44),
    [sym_m_dispatch] = STATE(44),
    [sym_string] = STATE(5),
    [sym_number] = STATE(5),
    [aux_sym_list_repeat1] = STATE(5),
    [sym_comment] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(131),
    [aux_sym_list_token1] = ACTIONS(129),
    [anon_sym_RPAREN] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_SQUOTE] = ACTIONS(137),
    [anon_sym_BQUOTE] = ACTIONS(139),
    [anon_sym_TILDE_AT] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(145),
    [anon_sym_POUND] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [sym_int] = ACTIONS(151),
    [sym_hex] = ACTIONS(151),
    [sym_float] = ACTIONS(151),
    [sym_symbol] = ACTIONS(153),
  },
  [17] = {
    [sym_list] = STATE(5),
    [sym__expr] = STATE(5),
    [sym_reader_macro] = STATE(5),
    [sym_m_quote] = STATE(44),
    [sym_m_quasiquote] = STATE(44),
    [sym_m_unquote_splicing] = STATE(44),
    [sym_m_unquote] = STATE(44),
    [sym_m_get] = STATE(44),
    [sym_m_dispatch] = STATE(44),
    [sym_string] = STATE(5),
    [sym_number] = STATE(5),
    [aux_sym_list_repeat1] = STATE(5),
    [sym_comment] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(131),
    [aux_sym_list_token1] = ACTIONS(129),
    [anon_sym_RPAREN] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_SQUOTE] = ACTIONS(137),
    [anon_sym_BQUOTE] = ACTIONS(139),
    [anon_sym_TILDE_AT] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(145),
    [anon_sym_POUND] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [sym_int] = ACTIONS(151),
    [sym_hex] = ACTIONS(151),
    [sym_float] = ACTIONS(151),
    [sym_symbol] = ACTIONS(153),
  },
  [18] = {
    [sym_list] = STATE(49),
    [sym__expr] = STATE(49),
    [sym_reader_macro] = STATE(49),
    [sym_m_quote] = STATE(44),
    [sym_m_quasiquote] = STATE(44),
    [sym_m_unquote_splicing] = STATE(44),
    [sym_m_unquote] = STATE(44),
    [sym_m_get] = STATE(44),
    [sym_m_dispatch] = STATE(44),
    [sym_string] = STATE(49),
    [sym_number] = STATE(49),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_SQUOTE] = ACTIONS(137),
    [anon_sym_BQUOTE] = ACTIONS(139),
    [anon_sym_TILDE_AT] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(145),
    [anon_sym_POUND] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [sym_int] = ACTIONS(151),
    [sym_hex] = ACTIONS(151),
    [sym_float] = ACTIONS(151),
    [sym_symbol] = ACTIONS(189),
  },
  [19] = {
    [sym_list] = STATE(47),
    [sym__expr] = STATE(47),
    [sym_reader_macro] = STATE(47),
    [sym_m_quote] = STATE(44),
    [sym_m_quasiquote] = STATE(44),
    [sym_m_unquote_splicing] = STATE(44),
    [sym_m_unquote] = STATE(44),
    [sym_m_get] = STATE(44),
    [sym_m_dispatch] = STATE(44),
    [sym_string] = STATE(47),
    [sym_number] = STATE(47),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_SQUOTE] = ACTIONS(137),
    [anon_sym_BQUOTE] = ACTIONS(139),
    [anon_sym_TILDE_AT] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(145),
    [anon_sym_POUND] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [sym_int] = ACTIONS(151),
    [sym_hex] = ACTIONS(151),
    [sym_float] = ACTIONS(151),
    [sym_symbol] = ACTIONS(191),
  },
  [20] = {
    [sym_list] = STATE(30),
    [sym__expr] = STATE(30),
    [sym_reader_macro] = STATE(30),
    [sym_m_quote] = STATE(35),
    [sym_m_quasiquote] = STATE(35),
    [sym_m_unquote_splicing] = STATE(35),
    [sym_m_unquote] = STATE(35),
    [sym_m_get] = STATE(35),
    [sym_m_dispatch] = STATE(35),
    [sym_string] = STATE(30),
    [sym_number] = STATE(30),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_TILDE_AT] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_PERCENT] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_int] = ACTIONS(39),
    [sym_hex] = ACTIONS(39),
    [sym_float] = ACTIONS(39),
    [sym_symbol] = ACTIONS(193),
  },
  [21] = {
    [sym_list] = STATE(39),
    [sym__expr] = STATE(39),
    [sym_reader_macro] = STATE(39),
    [sym_m_quote] = STATE(35),
    [sym_m_quasiquote] = STATE(35),
    [sym_m_unquote_splicing] = STATE(35),
    [sym_m_unquote] = STATE(35),
    [sym_m_get] = STATE(35),
    [sym_m_dispatch] = STATE(35),
    [sym_string] = STATE(39),
    [sym_number] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_TILDE_AT] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_PERCENT] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_int] = ACTIONS(39),
    [sym_hex] = ACTIONS(39),
    [sym_float] = ACTIONS(39),
    [sym_symbol] = ACTIONS(195),
  },
  [22] = {
    [sym_list] = STATE(38),
    [sym__expr] = STATE(38),
    [sym_reader_macro] = STATE(38),
    [sym_m_quote] = STATE(35),
    [sym_m_quasiquote] = STATE(35),
    [sym_m_unquote_splicing] = STATE(35),
    [sym_m_unquote] = STATE(35),
    [sym_m_get] = STATE(35),
    [sym_m_dispatch] = STATE(35),
    [sym_string] = STATE(38),
    [sym_number] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_TILDE_AT] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_PERCENT] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_int] = ACTIONS(39),
    [sym_hex] = ACTIONS(39),
    [sym_float] = ACTIONS(39),
    [sym_symbol] = ACTIONS(197),
  },
  [23] = {
    [sym_list] = STATE(37),
    [sym__expr] = STATE(37),
    [sym_reader_macro] = STATE(37),
    [sym_m_quote] = STATE(35),
    [sym_m_quasiquote] = STATE(35),
    [sym_m_unquote_splicing] = STATE(35),
    [sym_m_unquote] = STATE(35),
    [sym_m_get] = STATE(35),
    [sym_m_dispatch] = STATE(35),
    [sym_string] = STATE(37),
    [sym_number] = STATE(37),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_TILDE_AT] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_PERCENT] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_int] = ACTIONS(39),
    [sym_hex] = ACTIONS(39),
    [sym_float] = ACTIONS(39),
    [sym_symbol] = ACTIONS(199),
  },
  [24] = {
    [sym_list] = STATE(36),
    [sym__expr] = STATE(36),
    [sym_reader_macro] = STATE(36),
    [sym_m_quote] = STATE(35),
    [sym_m_quasiquote] = STATE(35),
    [sym_m_unquote_splicing] = STATE(35),
    [sym_m_unquote] = STATE(35),
    [sym_m_get] = STATE(35),
    [sym_m_dispatch] = STATE(35),
    [sym_string] = STATE(36),
    [sym_number] = STATE(36),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_TILDE_AT] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_PERCENT] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_int] = ACTIONS(39),
    [sym_hex] = ACTIONS(39),
    [sym_float] = ACTIONS(39),
    [sym_symbol] = ACTIONS(201),
  },
  [25] = {
    [sym_list] = STATE(51),
    [sym__expr] = STATE(51),
    [sym_reader_macro] = STATE(51),
    [sym_m_quote] = STATE(44),
    [sym_m_quasiquote] = STATE(44),
    [sym_m_unquote_splicing] = STATE(44),
    [sym_m_unquote] = STATE(44),
    [sym_m_get] = STATE(44),
    [sym_m_dispatch] = STATE(44),
    [sym_string] = STATE(51),
    [sym_number] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_SQUOTE] = ACTIONS(137),
    [anon_sym_BQUOTE] = ACTIONS(139),
    [anon_sym_TILDE_AT] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(145),
    [anon_sym_POUND] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [sym_int] = ACTIONS(151),
    [sym_hex] = ACTIONS(151),
    [sym_float] = ACTIONS(151),
    [sym_symbol] = ACTIONS(203),
  },
  [26] = {
    [sym_list] = STATE(48),
    [sym__expr] = STATE(48),
    [sym_reader_macro] = STATE(48),
    [sym_m_quote] = STATE(44),
    [sym_m_quasiquote] = STATE(44),
    [sym_m_unquote_splicing] = STATE(44),
    [sym_m_unquote] = STATE(44),
    [sym_m_get] = STATE(44),
    [sym_m_dispatch] = STATE(44),
    [sym_string] = STATE(48),
    [sym_number] = STATE(48),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_SQUOTE] = ACTIONS(137),
    [anon_sym_BQUOTE] = ACTIONS(139),
    [anon_sym_TILDE_AT] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(145),
    [anon_sym_POUND] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [sym_int] = ACTIONS(151),
    [sym_hex] = ACTIONS(151),
    [sym_float] = ACTIONS(151),
    [sym_symbol] = ACTIONS(205),
  },
  [27] = {
    [sym_list] = STATE(50),
    [sym__expr] = STATE(50),
    [sym_reader_macro] = STATE(50),
    [sym_m_quote] = STATE(44),
    [sym_m_quasiquote] = STATE(44),
    [sym_m_unquote_splicing] = STATE(44),
    [sym_m_unquote] = STATE(44),
    [sym_m_get] = STATE(44),
    [sym_m_dispatch] = STATE(44),
    [sym_string] = STATE(50),
    [sym_number] = STATE(50),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_SQUOTE] = ACTIONS(137),
    [anon_sym_BQUOTE] = ACTIONS(139),
    [anon_sym_TILDE_AT] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_PERCENT] = ACTIONS(145),
    [anon_sym_POUND] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [sym_int] = ACTIONS(151),
    [sym_hex] = ACTIONS(151),
    [sym_float] = ACTIONS(151),
    [sym_symbol] = ACTIONS(207),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(211), 7,
      sym_freetext,
      anon_sym_TILDE,
      sym_int,
      sym_hex,
      sym_float,
      sym_symbol,
      sym_command_symbol,
    ACTIONS(209), 12,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      aux_sym_command_token1,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [24] = 2,
    ACTIONS(215), 7,
      sym_freetext,
      anon_sym_TILDE,
      sym_int,
      sym_hex,
      sym_float,
      sym_symbol,
      sym_command_symbol,
    ACTIONS(213), 12,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      aux_sym_command_token1,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [48] = 2,
    ACTIONS(219), 7,
      sym_freetext,
      anon_sym_TILDE,
      sym_int,
      sym_hex,
      sym_float,
      sym_symbol,
      sym_command_symbol,
    ACTIONS(217), 12,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      aux_sym_command_token1,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [72] = 2,
    ACTIONS(223), 7,
      sym_freetext,
      anon_sym_TILDE,
      sym_int,
      sym_hex,
      sym_float,
      sym_symbol,
      sym_command_symbol,
    ACTIONS(221), 12,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      aux_sym_command_token1,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [96] = 2,
    ACTIONS(227), 7,
      sym_freetext,
      anon_sym_TILDE,
      sym_int,
      sym_hex,
      sym_float,
      sym_symbol,
      sym_command_symbol,
    ACTIONS(225), 12,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      aux_sym_command_token1,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [120] = 2,
    ACTIONS(231), 7,
      sym_freetext,
      anon_sym_TILDE,
      sym_int,
      sym_hex,
      sym_float,
      sym_symbol,
      sym_command_symbol,
    ACTIONS(229), 12,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      aux_sym_command_token1,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [144] = 2,
    ACTIONS(235), 7,
      sym_freetext,
      anon_sym_TILDE,
      sym_int,
      sym_hex,
      sym_float,
      sym_symbol,
      sym_command_symbol,
    ACTIONS(233), 12,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      aux_sym_command_token1,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [168] = 2,
    ACTIONS(239), 7,
      sym_freetext,
      anon_sym_TILDE,
      sym_int,
      sym_hex,
      sym_float,
      sym_symbol,
      sym_command_symbol,
    ACTIONS(237), 12,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      aux_sym_command_token1,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [192] = 2,
    ACTIONS(243), 7,
      sym_freetext,
      anon_sym_TILDE,
      sym_int,
      sym_hex,
      sym_float,
      sym_symbol,
      sym_command_symbol,
    ACTIONS(241), 12,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      aux_sym_command_token1,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [216] = 2,
    ACTIONS(247), 7,
      sym_freetext,
      anon_sym_TILDE,
      sym_int,
      sym_hex,
      sym_float,
      sym_symbol,
      sym_command_symbol,
    ACTIONS(245), 12,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      aux_sym_command_token1,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [240] = 2,
    ACTIONS(251), 7,
      sym_freetext,
      anon_sym_TILDE,
      sym_int,
      sym_hex,
      sym_float,
      sym_symbol,
      sym_command_symbol,
    ACTIONS(249), 12,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      aux_sym_command_token1,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [264] = 2,
    ACTIONS(255), 7,
      sym_freetext,
      anon_sym_TILDE,
      sym_int,
      sym_hex,
      sym_float,
      sym_symbol,
      sym_command_symbol,
    ACTIONS(253), 12,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      aux_sym_command_token1,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [288] = 2,
    ACTIONS(235), 5,
      anon_sym_TILDE,
      sym_int,
      sym_hex,
      sym_float,
      sym_symbol,
    ACTIONS(233), 12,
      sym_comment,
      anon_sym_LPAREN,
      aux_sym_list_token1,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [310] = 2,
    ACTIONS(215), 5,
      anon_sym_TILDE,
      sym_int,
      sym_hex,
      sym_float,
      sym_symbol,
    ACTIONS(213), 12,
      sym_comment,
      anon_sym_LPAREN,
      aux_sym_list_token1,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [332] = 2,
    ACTIONS(211), 5,
      anon_sym_TILDE,
      sym_int,
      sym_hex,
      sym_float,
      sym_symbol,
    ACTIONS(209), 12,
      sym_comment,
      anon_sym_LPAREN,
      aux_sym_list_token1,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [354] = 2,
    ACTIONS(223), 5,
      anon_sym_TILDE,
      sym_int,
      sym_hex,
      sym_float,
      sym_symbol,
    ACTIONS(221), 12,
      sym_comment,
      anon_sym_LPAREN,
      aux_sym_list_token1,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [376] = 2,
    ACTIONS(239), 5,
      anon_sym_TILDE,
      sym_int,
      sym_hex,
      sym_float,
      sym_symbol,
    ACTIONS(237), 12,
      sym_comment,
      anon_sym_LPAREN,
      aux_sym_list_token1,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [398] = 2,
    ACTIONS(227), 5,
      anon_sym_TILDE,
      sym_int,
      sym_hex,
      sym_float,
      sym_symbol,
    ACTIONS(225), 12,
      sym_comment,
      anon_sym_LPAREN,
      aux_sym_list_token1,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [420] = 2,
    ACTIONS(231), 5,
      anon_sym_TILDE,
      sym_int,
      sym_hex,
      sym_float,
      sym_symbol,
    ACTIONS(229), 12,
      sym_comment,
      anon_sym_LPAREN,
      aux_sym_list_token1,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [442] = 2,
    ACTIONS(219), 5,
      anon_sym_TILDE,
      sym_int,
      sym_hex,
      sym_float,
      sym_symbol,
    ACTIONS(217), 12,
      sym_comment,
      anon_sym_LPAREN,
      aux_sym_list_token1,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [464] = 2,
    ACTIONS(255), 5,
      anon_sym_TILDE,
      sym_int,
      sym_hex,
      sym_float,
      sym_symbol,
    ACTIONS(253), 12,
      sym_comment,
      anon_sym_LPAREN,
      aux_sym_list_token1,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [486] = 2,
    ACTIONS(251), 5,
      anon_sym_TILDE,
      sym_int,
      sym_hex,
      sym_float,
      sym_symbol,
    ACTIONS(249), 12,
      sym_comment,
      anon_sym_LPAREN,
      aux_sym_list_token1,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [508] = 2,
    ACTIONS(247), 5,
      anon_sym_TILDE,
      sym_int,
      sym_hex,
      sym_float,
      sym_symbol,
    ACTIONS(245), 12,
      sym_comment,
      anon_sym_LPAREN,
      aux_sym_list_token1,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [530] = 2,
    ACTIONS(243), 5,
      anon_sym_TILDE,
      sym_int,
      sym_hex,
      sym_float,
      sym_symbol,
    ACTIONS(241), 12,
      sym_comment,
      anon_sym_LPAREN,
      aux_sym_list_token1,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_TILDE_AT,
      anon_sym_PERCENT,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [552] = 7,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
    ACTIONS(262), 1,
      sym_freetext,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(268), 1,
      anon_sym_LBRACK,
    ACTIONS(271), 1,
      sym_command_symbol,
    ACTIONS(259), 2,
      aux_sym_source_file_token1,
      sym_comment,
    STATE(52), 3,
      sym_command,
      sym_list,
      aux_sym_source_file_repeat1,
  [577] = 7,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      sym_command_symbol,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
    ACTIONS(278), 1,
      sym_freetext,
    ACTIONS(276), 2,
      aux_sym_source_file_token1,
      sym_comment,
    STATE(52), 3,
      sym_command,
      sym_list,
      aux_sym_source_file_repeat1,
  [602] = 4,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    STATE(46), 1,
      sym_list,
    ACTIONS(280), 5,
      anon_sym_t,
      anon_sym_f,
      anon_sym_inf,
      anon_sym_DASHinf,
      anon_sym_nan,
  [619] = 4,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym_list,
    ACTIONS(282), 5,
      anon_sym_t,
      anon_sym_f,
      anon_sym_inf,
      anon_sym_DASHinf,
      anon_sym_nan,
  [636] = 2,
    ACTIONS(215), 1,
      sym_freetext,
    ACTIONS(213), 6,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_command_symbol,
  [648] = 2,
    ACTIONS(223), 1,
      sym_freetext,
    ACTIONS(221), 6,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_command_symbol,
  [660] = 3,
    ACTIONS(284), 1,
      anon_sym_DQUOTE,
    STATE(59), 1,
      aux_sym_string_repeat1,
    ACTIONS(286), 2,
      sym_string_text,
      sym_string_escape,
  [671] = 3,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      aux_sym_string_repeat1,
    ACTIONS(290), 2,
      sym_string_text,
      sym_string_escape,
  [682] = 3,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      aux_sym_string_repeat1,
    ACTIONS(294), 2,
      sym_string_text,
      sym_string_escape,
  [693] = 3,
    ACTIONS(296), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      aux_sym_string_repeat1,
    ACTIONS(290), 2,
      sym_string_text,
      sym_string_escape,
  [704] = 3,
    ACTIONS(298), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      aux_sym_string_repeat1,
    ACTIONS(300), 2,
      sym_string_text,
      sym_string_escape,
  [715] = 1,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(28)] = 0,
  [SMALL_STATE(29)] = 24,
  [SMALL_STATE(30)] = 48,
  [SMALL_STATE(31)] = 72,
  [SMALL_STATE(32)] = 96,
  [SMALL_STATE(33)] = 120,
  [SMALL_STATE(34)] = 144,
  [SMALL_STATE(35)] = 168,
  [SMALL_STATE(36)] = 192,
  [SMALL_STATE(37)] = 216,
  [SMALL_STATE(38)] = 240,
  [SMALL_STATE(39)] = 264,
  [SMALL_STATE(40)] = 288,
  [SMALL_STATE(41)] = 310,
  [SMALL_STATE(42)] = 332,
  [SMALL_STATE(43)] = 354,
  [SMALL_STATE(44)] = 376,
  [SMALL_STATE(45)] = 398,
  [SMALL_STATE(46)] = 420,
  [SMALL_STATE(47)] = 442,
  [SMALL_STATE(48)] = 464,
  [SMALL_STATE(49)] = 486,
  [SMALL_STATE(50)] = 508,
  [SMALL_STATE(51)] = 530,
  [SMALL_STATE(52)] = 552,
  [SMALL_STATE(53)] = 577,
  [SMALL_STATE(54)] = 602,
  [SMALL_STATE(55)] = 619,
  [SMALL_STATE(56)] = 636,
  [SMALL_STATE(57)] = 648,
  [SMALL_STATE(58)] = 660,
  [SMALL_STATE(59)] = 671,
  [SMALL_STATE(60)] = 682,
  [SMALL_STATE(61)] = 693,
  [SMALL_STATE(62)] = 704,
  [SMALL_STATE(63)] = 715,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(3),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(14),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(11),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(24),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(23),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(22),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(21),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(20),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(55),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(58),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(34),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(5),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(12),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(13),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(25),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(27),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(18),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(26),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(19),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(54),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(60),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(40),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(5),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_get, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_get, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_dispatch, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_dispatch, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reader_macro, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reader_macro, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_quote, 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_quote, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_quasiquote, 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_quasiquote, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_unquote_splicing, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_unquote_splicing, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_unquote, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_unquote, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(62),
  [303] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
