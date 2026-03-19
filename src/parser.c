#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 66
#define LARGE_STATE_COUNT 28
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_newline = 1,
  aux_sym_command_token1 = 2,
  sym_freetext = 3,
  sym_comment = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_LBRACK = 7,
  anon_sym_RBRACK = 8,
  anon_sym_SQUOTE = 9,
  anon_sym_BQUOTE = 10,
  anon_sym_TILDE_AT = 11,
  anon_sym_TILDE = 12,
  anon_sym_PERCENT = 13,
  anon_sym_POUND = 14,
  anon_sym_t = 15,
  anon_sym_f = 16,
  anon_sym_inf = 17,
  anon_sym_DASHinf = 18,
  anon_sym_nan = 19,
  anon_sym_DQUOTE = 20,
  sym_string_text = 21,
  sym_string_escape = 22,
  sym_int = 23,
  sym_hex = 24,
  sym_float = 25,
  sym_identifier = 26,
  sym_command_identifier = 27,
  sym_source_file = 28,
  sym_command = 29,
  sym__list_item = 30,
  sym_list = 31,
  sym_expression = 32,
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
  [sym_newline] = "newline",
  [aux_sym_command_token1] = "command_token1",
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
  [sym_identifier] = "identifier",
  [sym_command_identifier] = "command_identifier",
  [sym_source_file] = "source_file",
  [sym_command] = "command",
  [sym__list_item] = "_list_item",
  [sym_list] = "list",
  [sym_expression] = "expression",
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
  [sym_newline] = sym_newline,
  [aux_sym_command_token1] = aux_sym_command_token1,
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
  [sym_identifier] = sym_identifier,
  [sym_command_identifier] = sym_command_identifier,
  [sym_source_file] = sym_source_file,
  [sym_command] = sym_command,
  [sym__list_item] = sym__list_item,
  [sym_list] = sym_list,
  [sym_expression] = sym_expression,
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
  [sym_newline] = {
    .visible = true,
    .named = true,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_command_identifier] = {
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
  [sym__list_item] = {
    .visible = false,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
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
  [9] = 8,
  [10] = 6,
  [11] = 11,
  [12] = 8,
  [13] = 11,
  [14] = 11,
  [15] = 7,
  [16] = 6,
  [17] = 7,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 19,
  [24] = 20,
  [25] = 18,
  [26] = 21,
  [27] = 22,
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
  [40] = 40,
  [41] = 40,
  [42] = 39,
  [43] = 29,
  [44] = 30,
  [45] = 32,
  [46] = 31,
  [47] = 33,
  [48] = 34,
  [49] = 35,
  [50] = 28,
  [51] = 38,
  [52] = 37,
  [53] = 36,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 56,
  [58] = 30,
  [59] = 28,
  [60] = 60,
  [61] = 61,
  [62] = 60,
  [63] = 61,
  [64] = 64,
  [65] = 65,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
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
      if (eof) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '%') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '0') ADVANCE(48);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == '`') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead == '~') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '%') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '0') ADVANCE(48);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == '`') ADVANCE(35);
      if (lookahead == '~') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(46);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(5);
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(42);
      END_STATE();
    case 7:
      if (lookahead == 'f') ADVANCE(43);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 12:
      if (lookahead == '{') ADVANCE(20);
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
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 21:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '%') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '0') ADVANCE(48);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == '`') ADVANCE(35);
      if (lookahead == '~') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(27);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_newline);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_command_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_freetext);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == ')' ||
          lookahead == ']') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(68);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_freetext);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ';') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_TILDE_AT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '@') ADVANCE(36);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_inf);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DASHinf);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_nan);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_string_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_string_escape);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'x') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '0') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(63);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(67);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '0') ADVANCE(48);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(67);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(51);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(57);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(67);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(51);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(67);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(62);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(67);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(42);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(67);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(43);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(67);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(59);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(67);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(44);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(67);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(60);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(67);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(67);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_command_identifier);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(68);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 22},
  [2] = {.lex_state = 21},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 21},
  [5] = {.lex_state = 21},
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
  [40] = {.lex_state = 21},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 22},
  [55] = {.lex_state = 22},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 22},
  [59] = {.lex_state = 22},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_newline] = ACTIONS(1),
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
    [sym_identifier] = ACTIONS(1),
    [sym_command_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(65),
    [sym_command] = STATE(54),
    [sym_list] = STATE(54),
    [aux_sym_source_file_repeat1] = STATE(54),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_newline] = ACTIONS(5),
    [sym_freetext] = ACTIONS(7),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_command_identifier] = ACTIONS(13),
  },
  [2] = {
    [sym_list] = STATE(37),
    [sym_expression] = STATE(2),
    [sym_reader_macro] = STATE(37),
    [sym_m_quote] = STATE(38),
    [sym_m_quasiquote] = STATE(38),
    [sym_m_unquote_splicing] = STATE(38),
    [sym_m_unquote] = STATE(38),
    [sym_m_get] = STATE(38),
    [sym_m_dispatch] = STATE(38),
    [sym_string] = STATE(37),
    [sym_number] = STATE(37),
    [aux_sym_command_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_newline] = ACTIONS(15),
    [aux_sym_command_token1] = ACTIONS(17),
    [sym_freetext] = ACTIONS(20),
    [sym_comment] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(28),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_TILDE_AT] = ACTIONS(34),
    [anon_sym_TILDE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(40),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [sym_int] = ACTIONS(49),
    [sym_hex] = ACTIONS(52),
    [sym_float] = ACTIONS(52),
    [sym_identifier] = ACTIONS(55),
    [sym_command_identifier] = ACTIONS(15),
  },
  [3] = {
    [sym__list_item] = STATE(3),
    [sym_list] = STATE(52),
    [sym_expression] = STATE(3),
    [sym_reader_macro] = STATE(52),
    [sym_m_quote] = STATE(51),
    [sym_m_quasiquote] = STATE(51),
    [sym_m_unquote_splicing] = STATE(51),
    [sym_m_unquote] = STATE(51),
    [sym_m_get] = STATE(51),
    [sym_m_dispatch] = STATE(51),
    [sym_string] = STATE(52),
    [sym_number] = STATE(52),
    [aux_sym_list_repeat1] = STATE(3),
    [sym_newline] = ACTIONS(58),
    [aux_sym_command_token1] = ACTIONS(58),
    [sym_comment] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_RPAREN] = ACTIONS(64),
    [anon_sym_LBRACK] = ACTIONS(66),
    [anon_sym_RBRACK] = ACTIONS(64),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [anon_sym_BQUOTE] = ACTIONS(72),
    [anon_sym_TILDE_AT] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(78),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_POUND] = ACTIONS(84),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [sym_int] = ACTIONS(90),
    [sym_hex] = ACTIONS(93),
    [sym_float] = ACTIONS(93),
    [sym_identifier] = ACTIONS(96),
  },
  [4] = {
    [sym_list] = STATE(37),
    [sym_expression] = STATE(5),
    [sym_reader_macro] = STATE(37),
    [sym_m_quote] = STATE(38),
    [sym_m_quasiquote] = STATE(38),
    [sym_m_unquote_splicing] = STATE(38),
    [sym_m_unquote] = STATE(38),
    [sym_m_get] = STATE(38),
    [sym_m_dispatch] = STATE(38),
    [sym_string] = STATE(37),
    [sym_number] = STATE(37),
    [aux_sym_command_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(99),
    [sym_newline] = ACTIONS(99),
    [aux_sym_command_token1] = ACTIONS(101),
    [sym_freetext] = ACTIONS(103),
    [sym_comment] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_TILDE_AT] = ACTIONS(113),
    [anon_sym_TILDE] = ACTIONS(115),
    [anon_sym_PERCENT] = ACTIONS(117),
    [anon_sym_POUND] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [sym_int] = ACTIONS(123),
    [sym_hex] = ACTIONS(125),
    [sym_float] = ACTIONS(125),
    [sym_identifier] = ACTIONS(127),
    [sym_command_identifier] = ACTIONS(99),
  },
  [5] = {
    [sym_list] = STATE(37),
    [sym_expression] = STATE(2),
    [sym_reader_macro] = STATE(37),
    [sym_m_quote] = STATE(38),
    [sym_m_quasiquote] = STATE(38),
    [sym_m_unquote_splicing] = STATE(38),
    [sym_m_unquote] = STATE(38),
    [sym_m_get] = STATE(38),
    [sym_m_dispatch] = STATE(38),
    [sym_string] = STATE(37),
    [sym_number] = STATE(37),
    [aux_sym_command_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(129),
    [sym_newline] = ACTIONS(129),
    [aux_sym_command_token1] = ACTIONS(131),
    [sym_freetext] = ACTIONS(133),
    [sym_comment] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_TILDE_AT] = ACTIONS(113),
    [anon_sym_TILDE] = ACTIONS(115),
    [anon_sym_PERCENT] = ACTIONS(117),
    [anon_sym_POUND] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [sym_int] = ACTIONS(123),
    [sym_hex] = ACTIONS(125),
    [sym_float] = ACTIONS(125),
    [sym_identifier] = ACTIONS(127),
    [sym_command_identifier] = ACTIONS(129),
  },
  [6] = {
    [sym__list_item] = STATE(3),
    [sym_list] = STATE(52),
    [sym_expression] = STATE(3),
    [sym_reader_macro] = STATE(52),
    [sym_m_quote] = STATE(51),
    [sym_m_quasiquote] = STATE(51),
    [sym_m_unquote_splicing] = STATE(51),
    [sym_m_unquote] = STATE(51),
    [sym_m_get] = STATE(51),
    [sym_m_dispatch] = STATE(51),
    [sym_string] = STATE(52),
    [sym_number] = STATE(52),
    [aux_sym_list_repeat1] = STATE(3),
    [sym_newline] = ACTIONS(135),
    [aux_sym_command_token1] = ACTIONS(135),
    [sym_comment] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_RBRACK] = ACTIONS(141),
    [anon_sym_SQUOTE] = ACTIONS(143),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_TILDE_AT] = ACTIONS(147),
    [anon_sym_TILDE] = ACTIONS(149),
    [anon_sym_PERCENT] = ACTIONS(151),
    [anon_sym_POUND] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(155),
    [sym_int] = ACTIONS(157),
    [sym_hex] = ACTIONS(159),
    [sym_float] = ACTIONS(159),
    [sym_identifier] = ACTIONS(161),
  },
  [7] = {
    [sym__list_item] = STATE(3),
    [sym_list] = STATE(52),
    [sym_expression] = STATE(3),
    [sym_reader_macro] = STATE(52),
    [sym_m_quote] = STATE(51),
    [sym_m_quasiquote] = STATE(51),
    [sym_m_unquote_splicing] = STATE(51),
    [sym_m_unquote] = STATE(51),
    [sym_m_get] = STATE(51),
    [sym_m_dispatch] = STATE(51),
    [sym_string] = STATE(52),
    [sym_number] = STATE(52),
    [aux_sym_list_repeat1] = STATE(3),
    [sym_newline] = ACTIONS(135),
    [aux_sym_command_token1] = ACTIONS(135),
    [sym_comment] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_SQUOTE] = ACTIONS(143),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_TILDE_AT] = ACTIONS(147),
    [anon_sym_TILDE] = ACTIONS(149),
    [anon_sym_PERCENT] = ACTIONS(151),
    [anon_sym_POUND] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(155),
    [sym_int] = ACTIONS(157),
    [sym_hex] = ACTIONS(159),
    [sym_float] = ACTIONS(159),
    [sym_identifier] = ACTIONS(161),
  },
  [8] = {
    [sym__list_item] = STATE(10),
    [sym_list] = STATE(52),
    [sym_expression] = STATE(10),
    [sym_reader_macro] = STATE(52),
    [sym_m_quote] = STATE(51),
    [sym_m_quasiquote] = STATE(51),
    [sym_m_unquote_splicing] = STATE(51),
    [sym_m_unquote] = STATE(51),
    [sym_m_get] = STATE(51),
    [sym_m_dispatch] = STATE(51),
    [sym_string] = STATE(52),
    [sym_number] = STATE(52),
    [aux_sym_list_repeat1] = STATE(10),
    [sym_newline] = ACTIONS(165),
    [aux_sym_command_token1] = ACTIONS(165),
    [sym_comment] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_RBRACK] = ACTIONS(167),
    [anon_sym_SQUOTE] = ACTIONS(143),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_TILDE_AT] = ACTIONS(147),
    [anon_sym_TILDE] = ACTIONS(149),
    [anon_sym_PERCENT] = ACTIONS(151),
    [anon_sym_POUND] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(155),
    [sym_int] = ACTIONS(157),
    [sym_hex] = ACTIONS(159),
    [sym_float] = ACTIONS(159),
    [sym_identifier] = ACTIONS(161),
  },
  [9] = {
    [sym__list_item] = STATE(16),
    [sym_list] = STATE(52),
    [sym_expression] = STATE(16),
    [sym_reader_macro] = STATE(52),
    [sym_m_quote] = STATE(51),
    [sym_m_quasiquote] = STATE(51),
    [sym_m_unquote_splicing] = STATE(51),
    [sym_m_unquote] = STATE(51),
    [sym_m_get] = STATE(51),
    [sym_m_dispatch] = STATE(51),
    [sym_string] = STATE(52),
    [sym_number] = STATE(52),
    [aux_sym_list_repeat1] = STATE(16),
    [sym_newline] = ACTIONS(169),
    [aux_sym_command_token1] = ACTIONS(169),
    [sym_comment] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_RBRACK] = ACTIONS(171),
    [anon_sym_SQUOTE] = ACTIONS(143),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_TILDE_AT] = ACTIONS(147),
    [anon_sym_TILDE] = ACTIONS(149),
    [anon_sym_PERCENT] = ACTIONS(151),
    [anon_sym_POUND] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(155),
    [sym_int] = ACTIONS(157),
    [sym_hex] = ACTIONS(159),
    [sym_float] = ACTIONS(159),
    [sym_identifier] = ACTIONS(161),
  },
  [10] = {
    [sym__list_item] = STATE(3),
    [sym_list] = STATE(52),
    [sym_expression] = STATE(3),
    [sym_reader_macro] = STATE(52),
    [sym_m_quote] = STATE(51),
    [sym_m_quasiquote] = STATE(51),
    [sym_m_unquote_splicing] = STATE(51),
    [sym_m_unquote] = STATE(51),
    [sym_m_get] = STATE(51),
    [sym_m_dispatch] = STATE(51),
    [sym_string] = STATE(52),
    [sym_number] = STATE(52),
    [aux_sym_list_repeat1] = STATE(3),
    [sym_newline] = ACTIONS(135),
    [aux_sym_command_token1] = ACTIONS(135),
    [sym_comment] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_RBRACK] = ACTIONS(173),
    [anon_sym_SQUOTE] = ACTIONS(143),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_TILDE_AT] = ACTIONS(147),
    [anon_sym_TILDE] = ACTIONS(149),
    [anon_sym_PERCENT] = ACTIONS(151),
    [anon_sym_POUND] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(155),
    [sym_int] = ACTIONS(157),
    [sym_hex] = ACTIONS(159),
    [sym_float] = ACTIONS(159),
    [sym_identifier] = ACTIONS(161),
  },
  [11] = {
    [sym__list_item] = STATE(15),
    [sym_list] = STATE(52),
    [sym_expression] = STATE(15),
    [sym_reader_macro] = STATE(52),
    [sym_m_quote] = STATE(51),
    [sym_m_quasiquote] = STATE(51),
    [sym_m_unquote_splicing] = STATE(51),
    [sym_m_unquote] = STATE(51),
    [sym_m_get] = STATE(51),
    [sym_m_dispatch] = STATE(51),
    [sym_string] = STATE(52),
    [sym_number] = STATE(52),
    [aux_sym_list_repeat1] = STATE(15),
    [sym_newline] = ACTIONS(175),
    [aux_sym_command_token1] = ACTIONS(175),
    [sym_comment] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_SQUOTE] = ACTIONS(143),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_TILDE_AT] = ACTIONS(147),
    [anon_sym_TILDE] = ACTIONS(149),
    [anon_sym_PERCENT] = ACTIONS(151),
    [anon_sym_POUND] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(155),
    [sym_int] = ACTIONS(157),
    [sym_hex] = ACTIONS(159),
    [sym_float] = ACTIONS(159),
    [sym_identifier] = ACTIONS(161),
  },
  [12] = {
    [sym__list_item] = STATE(6),
    [sym_list] = STATE(52),
    [sym_expression] = STATE(6),
    [sym_reader_macro] = STATE(52),
    [sym_m_quote] = STATE(51),
    [sym_m_quasiquote] = STATE(51),
    [sym_m_unquote_splicing] = STATE(51),
    [sym_m_unquote] = STATE(51),
    [sym_m_get] = STATE(51),
    [sym_m_dispatch] = STATE(51),
    [sym_string] = STATE(52),
    [sym_number] = STATE(52),
    [aux_sym_list_repeat1] = STATE(6),
    [sym_newline] = ACTIONS(179),
    [aux_sym_command_token1] = ACTIONS(179),
    [sym_comment] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_RBRACK] = ACTIONS(177),
    [anon_sym_SQUOTE] = ACTIONS(143),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_TILDE_AT] = ACTIONS(147),
    [anon_sym_TILDE] = ACTIONS(149),
    [anon_sym_PERCENT] = ACTIONS(151),
    [anon_sym_POUND] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(155),
    [sym_int] = ACTIONS(157),
    [sym_hex] = ACTIONS(159),
    [sym_float] = ACTIONS(159),
    [sym_identifier] = ACTIONS(161),
  },
  [13] = {
    [sym__list_item] = STATE(7),
    [sym_list] = STATE(52),
    [sym_expression] = STATE(7),
    [sym_reader_macro] = STATE(52),
    [sym_m_quote] = STATE(51),
    [sym_m_quasiquote] = STATE(51),
    [sym_m_unquote_splicing] = STATE(51),
    [sym_m_unquote] = STATE(51),
    [sym_m_get] = STATE(51),
    [sym_m_dispatch] = STATE(51),
    [sym_string] = STATE(52),
    [sym_number] = STATE(52),
    [aux_sym_list_repeat1] = STATE(7),
    [sym_newline] = ACTIONS(181),
    [aux_sym_command_token1] = ACTIONS(181),
    [sym_comment] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_SQUOTE] = ACTIONS(143),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_TILDE_AT] = ACTIONS(147),
    [anon_sym_TILDE] = ACTIONS(149),
    [anon_sym_PERCENT] = ACTIONS(151),
    [anon_sym_POUND] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(155),
    [sym_int] = ACTIONS(157),
    [sym_hex] = ACTIONS(159),
    [sym_float] = ACTIONS(159),
    [sym_identifier] = ACTIONS(161),
  },
  [14] = {
    [sym__list_item] = STATE(17),
    [sym_list] = STATE(52),
    [sym_expression] = STATE(17),
    [sym_reader_macro] = STATE(52),
    [sym_m_quote] = STATE(51),
    [sym_m_quasiquote] = STATE(51),
    [sym_m_unquote_splicing] = STATE(51),
    [sym_m_unquote] = STATE(51),
    [sym_m_get] = STATE(51),
    [sym_m_dispatch] = STATE(51),
    [sym_string] = STATE(52),
    [sym_number] = STATE(52),
    [aux_sym_list_repeat1] = STATE(17),
    [sym_newline] = ACTIONS(183),
    [aux_sym_command_token1] = ACTIONS(183),
    [sym_comment] = ACTIONS(183),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_SQUOTE] = ACTIONS(143),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_TILDE_AT] = ACTIONS(147),
    [anon_sym_TILDE] = ACTIONS(149),
    [anon_sym_PERCENT] = ACTIONS(151),
    [anon_sym_POUND] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(155),
    [sym_int] = ACTIONS(157),
    [sym_hex] = ACTIONS(159),
    [sym_float] = ACTIONS(159),
    [sym_identifier] = ACTIONS(161),
  },
  [15] = {
    [sym__list_item] = STATE(3),
    [sym_list] = STATE(52),
    [sym_expression] = STATE(3),
    [sym_reader_macro] = STATE(52),
    [sym_m_quote] = STATE(51),
    [sym_m_quasiquote] = STATE(51),
    [sym_m_unquote_splicing] = STATE(51),
    [sym_m_unquote] = STATE(51),
    [sym_m_get] = STATE(51),
    [sym_m_dispatch] = STATE(51),
    [sym_string] = STATE(52),
    [sym_number] = STATE(52),
    [aux_sym_list_repeat1] = STATE(3),
    [sym_newline] = ACTIONS(135),
    [aux_sym_command_token1] = ACTIONS(135),
    [sym_comment] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_SQUOTE] = ACTIONS(143),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_TILDE_AT] = ACTIONS(147),
    [anon_sym_TILDE] = ACTIONS(149),
    [anon_sym_PERCENT] = ACTIONS(151),
    [anon_sym_POUND] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(155),
    [sym_int] = ACTIONS(157),
    [sym_hex] = ACTIONS(159),
    [sym_float] = ACTIONS(159),
    [sym_identifier] = ACTIONS(161),
  },
  [16] = {
    [sym__list_item] = STATE(3),
    [sym_list] = STATE(52),
    [sym_expression] = STATE(3),
    [sym_reader_macro] = STATE(52),
    [sym_m_quote] = STATE(51),
    [sym_m_quasiquote] = STATE(51),
    [sym_m_unquote_splicing] = STATE(51),
    [sym_m_unquote] = STATE(51),
    [sym_m_get] = STATE(51),
    [sym_m_dispatch] = STATE(51),
    [sym_string] = STATE(52),
    [sym_number] = STATE(52),
    [aux_sym_list_repeat1] = STATE(3),
    [sym_newline] = ACTIONS(135),
    [aux_sym_command_token1] = ACTIONS(135),
    [sym_comment] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_RBRACK] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(143),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_TILDE_AT] = ACTIONS(147),
    [anon_sym_TILDE] = ACTIONS(149),
    [anon_sym_PERCENT] = ACTIONS(151),
    [anon_sym_POUND] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(155),
    [sym_int] = ACTIONS(157),
    [sym_hex] = ACTIONS(159),
    [sym_float] = ACTIONS(159),
    [sym_identifier] = ACTIONS(161),
  },
  [17] = {
    [sym__list_item] = STATE(3),
    [sym_list] = STATE(52),
    [sym_expression] = STATE(3),
    [sym_reader_macro] = STATE(52),
    [sym_m_quote] = STATE(51),
    [sym_m_quasiquote] = STATE(51),
    [sym_m_unquote_splicing] = STATE(51),
    [sym_m_unquote] = STATE(51),
    [sym_m_get] = STATE(51),
    [sym_m_dispatch] = STATE(51),
    [sym_string] = STATE(52),
    [sym_number] = STATE(52),
    [aux_sym_list_repeat1] = STATE(3),
    [sym_newline] = ACTIONS(135),
    [aux_sym_command_token1] = ACTIONS(135),
    [sym_comment] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_SQUOTE] = ACTIONS(143),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_TILDE_AT] = ACTIONS(147),
    [anon_sym_TILDE] = ACTIONS(149),
    [anon_sym_PERCENT] = ACTIONS(151),
    [anon_sym_POUND] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(155),
    [sym_int] = ACTIONS(157),
    [sym_hex] = ACTIONS(159),
    [sym_float] = ACTIONS(159),
    [sym_identifier] = ACTIONS(161),
  },
  [18] = {
    [sym_list] = STATE(37),
    [sym_expression] = STATE(34),
    [sym_reader_macro] = STATE(37),
    [sym_m_quote] = STATE(38),
    [sym_m_quasiquote] = STATE(38),
    [sym_m_unquote_splicing] = STATE(38),
    [sym_m_unquote] = STATE(38),
    [sym_m_get] = STATE(38),
    [sym_m_dispatch] = STATE(38),
    [sym_string] = STATE(37),
    [sym_number] = STATE(37),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_TILDE_AT] = ACTIONS(113),
    [anon_sym_TILDE] = ACTIONS(115),
    [anon_sym_PERCENT] = ACTIONS(117),
    [anon_sym_POUND] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [sym_int] = ACTIONS(123),
    [sym_hex] = ACTIONS(125),
    [sym_float] = ACTIONS(125),
    [sym_identifier] = ACTIONS(127),
  },
  [19] = {
    [sym_list] = STATE(52),
    [sym_expression] = STATE(42),
    [sym_reader_macro] = STATE(52),
    [sym_m_quote] = STATE(51),
    [sym_m_quasiquote] = STATE(51),
    [sym_m_unquote_splicing] = STATE(51),
    [sym_m_unquote] = STATE(51),
    [sym_m_get] = STATE(51),
    [sym_m_dispatch] = STATE(51),
    [sym_string] = STATE(52),
    [sym_number] = STATE(52),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_SQUOTE] = ACTIONS(143),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_TILDE_AT] = ACTIONS(147),
    [anon_sym_TILDE] = ACTIONS(149),
    [anon_sym_PERCENT] = ACTIONS(151),
    [anon_sym_POUND] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(155),
    [sym_int] = ACTIONS(157),
    [sym_hex] = ACTIONS(159),
    [sym_float] = ACTIONS(159),
    [sym_identifier] = ACTIONS(161),
  },
  [20] = {
    [sym_list] = STATE(37),
    [sym_expression] = STATE(33),
    [sym_reader_macro] = STATE(37),
    [sym_m_quote] = STATE(38),
    [sym_m_quasiquote] = STATE(38),
    [sym_m_unquote_splicing] = STATE(38),
    [sym_m_unquote] = STATE(38),
    [sym_m_get] = STATE(38),
    [sym_m_dispatch] = STATE(38),
    [sym_string] = STATE(37),
    [sym_number] = STATE(37),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_TILDE_AT] = ACTIONS(113),
    [anon_sym_TILDE] = ACTIONS(115),
    [anon_sym_PERCENT] = ACTIONS(117),
    [anon_sym_POUND] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [sym_int] = ACTIONS(123),
    [sym_hex] = ACTIONS(125),
    [sym_float] = ACTIONS(125),
    [sym_identifier] = ACTIONS(127),
  },
  [21] = {
    [sym_list] = STATE(37),
    [sym_expression] = STATE(35),
    [sym_reader_macro] = STATE(37),
    [sym_m_quote] = STATE(38),
    [sym_m_quasiquote] = STATE(38),
    [sym_m_unquote_splicing] = STATE(38),
    [sym_m_unquote] = STATE(38),
    [sym_m_get] = STATE(38),
    [sym_m_dispatch] = STATE(38),
    [sym_string] = STATE(37),
    [sym_number] = STATE(37),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_TILDE_AT] = ACTIONS(113),
    [anon_sym_TILDE] = ACTIONS(115),
    [anon_sym_PERCENT] = ACTIONS(117),
    [anon_sym_POUND] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [sym_int] = ACTIONS(123),
    [sym_hex] = ACTIONS(125),
    [sym_float] = ACTIONS(125),
    [sym_identifier] = ACTIONS(127),
  },
  [22] = {
    [sym_list] = STATE(37),
    [sym_expression] = STATE(40),
    [sym_reader_macro] = STATE(37),
    [sym_m_quote] = STATE(38),
    [sym_m_quasiquote] = STATE(38),
    [sym_m_unquote_splicing] = STATE(38),
    [sym_m_unquote] = STATE(38),
    [sym_m_get] = STATE(38),
    [sym_m_dispatch] = STATE(38),
    [sym_string] = STATE(37),
    [sym_number] = STATE(37),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_TILDE_AT] = ACTIONS(113),
    [anon_sym_TILDE] = ACTIONS(115),
    [anon_sym_PERCENT] = ACTIONS(117),
    [anon_sym_POUND] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [sym_int] = ACTIONS(123),
    [sym_hex] = ACTIONS(125),
    [sym_float] = ACTIONS(125),
    [sym_identifier] = ACTIONS(127),
  },
  [23] = {
    [sym_list] = STATE(37),
    [sym_expression] = STATE(39),
    [sym_reader_macro] = STATE(37),
    [sym_m_quote] = STATE(38),
    [sym_m_quasiquote] = STATE(38),
    [sym_m_unquote_splicing] = STATE(38),
    [sym_m_unquote] = STATE(38),
    [sym_m_get] = STATE(38),
    [sym_m_dispatch] = STATE(38),
    [sym_string] = STATE(37),
    [sym_number] = STATE(37),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_TILDE_AT] = ACTIONS(113),
    [anon_sym_TILDE] = ACTIONS(115),
    [anon_sym_PERCENT] = ACTIONS(117),
    [anon_sym_POUND] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [sym_int] = ACTIONS(123),
    [sym_hex] = ACTIONS(125),
    [sym_float] = ACTIONS(125),
    [sym_identifier] = ACTIONS(127),
  },
  [24] = {
    [sym_list] = STATE(52),
    [sym_expression] = STATE(47),
    [sym_reader_macro] = STATE(52),
    [sym_m_quote] = STATE(51),
    [sym_m_quasiquote] = STATE(51),
    [sym_m_unquote_splicing] = STATE(51),
    [sym_m_unquote] = STATE(51),
    [sym_m_get] = STATE(51),
    [sym_m_dispatch] = STATE(51),
    [sym_string] = STATE(52),
    [sym_number] = STATE(52),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_SQUOTE] = ACTIONS(143),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_TILDE_AT] = ACTIONS(147),
    [anon_sym_TILDE] = ACTIONS(149),
    [anon_sym_PERCENT] = ACTIONS(151),
    [anon_sym_POUND] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(155),
    [sym_int] = ACTIONS(157),
    [sym_hex] = ACTIONS(159),
    [sym_float] = ACTIONS(159),
    [sym_identifier] = ACTIONS(161),
  },
  [25] = {
    [sym_list] = STATE(52),
    [sym_expression] = STATE(48),
    [sym_reader_macro] = STATE(52),
    [sym_m_quote] = STATE(51),
    [sym_m_quasiquote] = STATE(51),
    [sym_m_unquote_splicing] = STATE(51),
    [sym_m_unquote] = STATE(51),
    [sym_m_get] = STATE(51),
    [sym_m_dispatch] = STATE(51),
    [sym_string] = STATE(52),
    [sym_number] = STATE(52),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_SQUOTE] = ACTIONS(143),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_TILDE_AT] = ACTIONS(147),
    [anon_sym_TILDE] = ACTIONS(149),
    [anon_sym_PERCENT] = ACTIONS(151),
    [anon_sym_POUND] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(155),
    [sym_int] = ACTIONS(157),
    [sym_hex] = ACTIONS(159),
    [sym_float] = ACTIONS(159),
    [sym_identifier] = ACTIONS(161),
  },
  [26] = {
    [sym_list] = STATE(52),
    [sym_expression] = STATE(49),
    [sym_reader_macro] = STATE(52),
    [sym_m_quote] = STATE(51),
    [sym_m_quasiquote] = STATE(51),
    [sym_m_unquote_splicing] = STATE(51),
    [sym_m_unquote] = STATE(51),
    [sym_m_get] = STATE(51),
    [sym_m_dispatch] = STATE(51),
    [sym_string] = STATE(52),
    [sym_number] = STATE(52),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_SQUOTE] = ACTIONS(143),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_TILDE_AT] = ACTIONS(147),
    [anon_sym_TILDE] = ACTIONS(149),
    [anon_sym_PERCENT] = ACTIONS(151),
    [anon_sym_POUND] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(155),
    [sym_int] = ACTIONS(157),
    [sym_hex] = ACTIONS(159),
    [sym_float] = ACTIONS(159),
    [sym_identifier] = ACTIONS(161),
  },
  [27] = {
    [sym_list] = STATE(52),
    [sym_expression] = STATE(41),
    [sym_reader_macro] = STATE(52),
    [sym_m_quote] = STATE(51),
    [sym_m_quasiquote] = STATE(51),
    [sym_m_unquote_splicing] = STATE(51),
    [sym_m_unquote] = STATE(51),
    [sym_m_get] = STATE(51),
    [sym_m_dispatch] = STATE(51),
    [sym_string] = STATE(52),
    [sym_number] = STATE(52),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_SQUOTE] = ACTIONS(143),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_TILDE_AT] = ACTIONS(147),
    [anon_sym_TILDE] = ACTIONS(149),
    [anon_sym_PERCENT] = ACTIONS(151),
    [anon_sym_POUND] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(155),
    [sym_int] = ACTIONS(157),
    [sym_hex] = ACTIONS(159),
    [sym_float] = ACTIONS(159),
    [sym_identifier] = ACTIONS(161),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(187), 4,
      sym_freetext,
      anon_sym_TILDE,
      sym_int,
      sym_identifier,
    ACTIONS(185), 15,
      ts_builtin_sym_end,
      sym_newline,
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
      sym_hex,
      sym_float,
      sym_command_identifier,
  [24] = 2,
    ACTIONS(191), 4,
      sym_freetext,
      anon_sym_TILDE,
      sym_int,
      sym_identifier,
    ACTIONS(189), 15,
      ts_builtin_sym_end,
      sym_newline,
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
      sym_hex,
      sym_float,
      sym_command_identifier,
  [48] = 2,
    ACTIONS(195), 4,
      sym_freetext,
      anon_sym_TILDE,
      sym_int,
      sym_identifier,
    ACTIONS(193), 15,
      ts_builtin_sym_end,
      sym_newline,
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
      sym_hex,
      sym_float,
      sym_command_identifier,
  [72] = 2,
    ACTIONS(199), 4,
      sym_freetext,
      anon_sym_TILDE,
      sym_int,
      sym_identifier,
    ACTIONS(197), 15,
      ts_builtin_sym_end,
      sym_newline,
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
      sym_hex,
      sym_float,
      sym_command_identifier,
  [96] = 2,
    ACTIONS(203), 4,
      sym_freetext,
      anon_sym_TILDE,
      sym_int,
      sym_identifier,
    ACTIONS(201), 15,
      ts_builtin_sym_end,
      sym_newline,
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
      sym_hex,
      sym_float,
      sym_command_identifier,
  [120] = 2,
    ACTIONS(207), 4,
      sym_freetext,
      anon_sym_TILDE,
      sym_int,
      sym_identifier,
    ACTIONS(205), 15,
      ts_builtin_sym_end,
      sym_newline,
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
      sym_hex,
      sym_float,
      sym_command_identifier,
  [144] = 2,
    ACTIONS(211), 4,
      sym_freetext,
      anon_sym_TILDE,
      sym_int,
      sym_identifier,
    ACTIONS(209), 15,
      ts_builtin_sym_end,
      sym_newline,
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
      sym_hex,
      sym_float,
      sym_command_identifier,
  [168] = 2,
    ACTIONS(215), 4,
      sym_freetext,
      anon_sym_TILDE,
      sym_int,
      sym_identifier,
    ACTIONS(213), 15,
      ts_builtin_sym_end,
      sym_newline,
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
      sym_hex,
      sym_float,
      sym_command_identifier,
  [192] = 2,
    ACTIONS(219), 4,
      sym_freetext,
      anon_sym_TILDE,
      sym_int,
      sym_identifier,
    ACTIONS(217), 15,
      ts_builtin_sym_end,
      sym_newline,
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
      sym_hex,
      sym_float,
      sym_command_identifier,
  [216] = 2,
    ACTIONS(223), 4,
      sym_freetext,
      anon_sym_TILDE,
      sym_int,
      sym_identifier,
    ACTIONS(221), 15,
      ts_builtin_sym_end,
      sym_newline,
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
      sym_hex,
      sym_float,
      sym_command_identifier,
  [240] = 2,
    ACTIONS(227), 4,
      sym_freetext,
      anon_sym_TILDE,
      sym_int,
      sym_identifier,
    ACTIONS(225), 15,
      ts_builtin_sym_end,
      sym_newline,
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
      sym_hex,
      sym_float,
      sym_command_identifier,
  [264] = 2,
    ACTIONS(231), 4,
      sym_freetext,
      anon_sym_TILDE,
      sym_int,
      sym_identifier,
    ACTIONS(229), 15,
      ts_builtin_sym_end,
      sym_newline,
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
      sym_hex,
      sym_float,
      sym_command_identifier,
  [288] = 2,
    ACTIONS(235), 4,
      sym_freetext,
      anon_sym_TILDE,
      sym_int,
      sym_identifier,
    ACTIONS(233), 15,
      ts_builtin_sym_end,
      sym_newline,
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
      sym_hex,
      sym_float,
      sym_command_identifier,
  [312] = 2,
    ACTIONS(235), 3,
      anon_sym_TILDE,
      sym_int,
      sym_identifier,
    ACTIONS(233), 15,
      sym_newline,
      aux_sym_command_token1,
      sym_comment,
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
      sym_hex,
      sym_float,
  [335] = 2,
    ACTIONS(231), 3,
      anon_sym_TILDE,
      sym_int,
      sym_identifier,
    ACTIONS(229), 15,
      sym_newline,
      aux_sym_command_token1,
      sym_comment,
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
      sym_hex,
      sym_float,
  [358] = 2,
    ACTIONS(191), 3,
      anon_sym_TILDE,
      sym_int,
      sym_identifier,
    ACTIONS(189), 15,
      sym_newline,
      aux_sym_command_token1,
      sym_comment,
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
      sym_hex,
      sym_float,
  [381] = 2,
    ACTIONS(195), 3,
      anon_sym_TILDE,
      sym_int,
      sym_identifier,
    ACTIONS(193), 15,
      sym_newline,
      aux_sym_command_token1,
      sym_comment,
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
      sym_hex,
      sym_float,
  [404] = 2,
    ACTIONS(203), 3,
      anon_sym_TILDE,
      sym_int,
      sym_identifier,
    ACTIONS(201), 15,
      sym_newline,
      aux_sym_command_token1,
      sym_comment,
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
      sym_hex,
      sym_float,
  [427] = 2,
    ACTIONS(199), 3,
      anon_sym_TILDE,
      sym_int,
      sym_identifier,
    ACTIONS(197), 15,
      sym_newline,
      aux_sym_command_token1,
      sym_comment,
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
      sym_hex,
      sym_float,
  [450] = 2,
    ACTIONS(207), 3,
      anon_sym_TILDE,
      sym_int,
      sym_identifier,
    ACTIONS(205), 15,
      sym_newline,
      aux_sym_command_token1,
      sym_comment,
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
      sym_hex,
      sym_float,
  [473] = 2,
    ACTIONS(211), 3,
      anon_sym_TILDE,
      sym_int,
      sym_identifier,
    ACTIONS(209), 15,
      sym_newline,
      aux_sym_command_token1,
      sym_comment,
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
      sym_hex,
      sym_float,
  [496] = 2,
    ACTIONS(215), 3,
      anon_sym_TILDE,
      sym_int,
      sym_identifier,
    ACTIONS(213), 15,
      sym_newline,
      aux_sym_command_token1,
      sym_comment,
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
      sym_hex,
      sym_float,
  [519] = 2,
    ACTIONS(187), 3,
      anon_sym_TILDE,
      sym_int,
      sym_identifier,
    ACTIONS(185), 15,
      sym_newline,
      aux_sym_command_token1,
      sym_comment,
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
      sym_hex,
      sym_float,
  [542] = 2,
    ACTIONS(227), 3,
      anon_sym_TILDE,
      sym_int,
      sym_identifier,
    ACTIONS(225), 15,
      sym_newline,
      aux_sym_command_token1,
      sym_comment,
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
      sym_hex,
      sym_float,
  [565] = 2,
    ACTIONS(223), 3,
      anon_sym_TILDE,
      sym_int,
      sym_identifier,
    ACTIONS(221), 15,
      sym_newline,
      aux_sym_command_token1,
      sym_comment,
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
      sym_hex,
      sym_float,
  [588] = 2,
    ACTIONS(219), 3,
      anon_sym_TILDE,
      sym_int,
      sym_identifier,
    ACTIONS(217), 15,
      sym_newline,
      aux_sym_command_token1,
      sym_comment,
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
      sym_hex,
      sym_float,
  [611] = 7,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      sym_command_identifier,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    ACTIONS(241), 1,
      sym_freetext,
    ACTIONS(239), 2,
      sym_newline,
      sym_comment,
    STATE(55), 3,
      sym_command,
      sym_list,
      aux_sym_source_file_repeat1,
  [636] = 7,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    ACTIONS(248), 1,
      sym_freetext,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      anon_sym_LBRACK,
    ACTIONS(257), 1,
      sym_command_identifier,
    ACTIONS(245), 2,
      sym_newline,
      sym_comment,
    STATE(55), 3,
      sym_command,
      sym_list,
      aux_sym_source_file_repeat1,
  [661] = 4,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    STATE(45), 1,
      sym_list,
    ACTIONS(260), 5,
      anon_sym_t,
      anon_sym_f,
      anon_sym_inf,
      anon_sym_DASHinf,
      anon_sym_nan,
  [678] = 4,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      sym_list,
    ACTIONS(262), 5,
      anon_sym_t,
      anon_sym_f,
      anon_sym_inf,
      anon_sym_DASHinf,
      anon_sym_nan,
  [695] = 2,
    ACTIONS(195), 1,
      sym_freetext,
    ACTIONS(193), 6,
      ts_builtin_sym_end,
      sym_newline,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_command_identifier,
  [707] = 2,
    ACTIONS(187), 1,
      sym_freetext,
    ACTIONS(185), 6,
      ts_builtin_sym_end,
      sym_newline,
      sym_comment,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_command_identifier,
  [719] = 3,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      aux_sym_string_repeat1,
    ACTIONS(266), 2,
      sym_string_text,
      sym_string_escape,
  [730] = 3,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      aux_sym_string_repeat1,
    ACTIONS(270), 2,
      sym_string_text,
      sym_string_escape,
  [741] = 3,
    ACTIONS(272), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      aux_sym_string_repeat1,
    ACTIONS(274), 2,
      sym_string_text,
      sym_string_escape,
  [752] = 3,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      aux_sym_string_repeat1,
    ACTIONS(270), 2,
      sym_string_text,
      sym_string_escape,
  [763] = 3,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      aux_sym_string_repeat1,
    ACTIONS(280), 2,
      sym_string_text,
      sym_string_escape,
  [774] = 1,
    ACTIONS(283), 1,
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
  [SMALL_STATE(41)] = 312,
  [SMALL_STATE(42)] = 335,
  [SMALL_STATE(43)] = 358,
  [SMALL_STATE(44)] = 381,
  [SMALL_STATE(45)] = 404,
  [SMALL_STATE(46)] = 427,
  [SMALL_STATE(47)] = 450,
  [SMALL_STATE(48)] = 473,
  [SMALL_STATE(49)] = 496,
  [SMALL_STATE(50)] = 519,
  [SMALL_STATE(51)] = 542,
  [SMALL_STATE(52)] = 565,
  [SMALL_STATE(53)] = 588,
  [SMALL_STATE(54)] = 611,
  [SMALL_STATE(55)] = 636,
  [SMALL_STATE(56)] = 661,
  [SMALL_STATE(57)] = 678,
  [SMALL_STATE(58)] = 695,
  [SMALL_STATE(59)] = 707,
  [SMALL_STATE(60)] = 719,
  [SMALL_STATE(61)] = 730,
  [SMALL_STATE(62)] = 741,
  [SMALL_STATE(63)] = 752,
  [SMALL_STATE(64)] = 763,
  [SMALL_STATE(65)] = 774,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(2),
  [20] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(14),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(8),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(23),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(22),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(21),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(18),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(20),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(57),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(62),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(36),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(36),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(37),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(3),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(11),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(12),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(19),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(27),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(26),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(25),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(24),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(56),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(60),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(53),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(53),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(52),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_dispatch, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_dispatch, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_get, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_get, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_unquote, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_unquote, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_unquote_splicing, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_unquote_splicing, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reader_macro, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reader_macro, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_quote, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_quote, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_m_quasiquote, 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_m_quasiquote, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(64),
  [283] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
