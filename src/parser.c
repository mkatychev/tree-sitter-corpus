#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 79
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 1
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  aux_sym__test_name_token1 = 1,
  anon_sym_COLONskip = 2,
  anon_sym_COLONerror = 3,
  anon_sym_COLONfail_DASHfast = 4,
  anon_sym_COLONplatform = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_COLONlanguage = 8,
  sym_language = 9,
  sym_platform = 10,
  aux_sym__header_delim_token1 = 11,
  aux_sym__median_token1 = 12,
  sym_suffix__ = 13,
  sym__input_line = 14,
  anon_sym_COLON = 15,
  sym_identifier = 16,
  sym_comment = 17,
  sym__newline = 18,
  sym_text = 19,
  sym_source_file = 20,
  sym_test = 21,
  sym__test_name = 22,
  sym_attribute = 23,
  sym__language_attribute = 24,
  sym__header_delim = 25,
  sym__header = 26,
  sym__median = 27,
  sym__test__ = 28,
  sym_header_delim__ = 29,
  sym__header__ = 30,
  sym__median__ = 31,
  sym_input = 32,
  sym_output = 33,
  sym_node = 34,
  aux_sym_source_file_repeat1 = 35,
  aux_sym_source_file_repeat2 = 36,
  aux_sym__header_repeat1 = 37,
  aux_sym_input_repeat1 = 38,
  aux_sym_output_repeat1 = 39,
  aux_sym_node_repeat1 = 40,
  alias_sym_field_name = 41,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__test_name_token1] = "_test_name_token1",
  [anon_sym_COLONskip] = ":skip",
  [anon_sym_COLONerror] = ":error",
  [anon_sym_COLONfail_DASHfast] = ":fail-fast",
  [anon_sym_COLONplatform] = ":platform",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLONlanguage] = ":language",
  [sym_language] = "language",
  [sym_platform] = "platform",
  [aux_sym__header_delim_token1] = "_header_delim_token1",
  [aux_sym__median_token1] = "_median_token1",
  [sym_suffix__] = "suffix__",
  [sym__input_line] = "_input_line",
  [anon_sym_COLON] = ":",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym__newline] = "_newline",
  [sym_text] = "text",
  [sym_source_file] = "source_file",
  [sym_test] = "test",
  [sym__test_name] = "_test_name",
  [sym_attribute] = "attribute",
  [sym__language_attribute] = "_language_attribute",
  [sym__header_delim] = "_header_delim",
  [sym__header] = "_header",
  [sym__median] = "_median",
  [sym__test__] = "_test__",
  [sym_header_delim__] = "header_delim__",
  [sym__header__] = "_header__",
  [sym__median__] = "_median__",
  [sym_input] = "input",
  [sym_output] = "output",
  [sym_node] = "node",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym__header_repeat1] = "_header_repeat1",
  [aux_sym_input_repeat1] = "input_repeat1",
  [aux_sym_output_repeat1] = "output_repeat1",
  [aux_sym_node_repeat1] = "node_repeat1",
  [alias_sym_field_name] = "field_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__test_name_token1] = aux_sym__test_name_token1,
  [anon_sym_COLONskip] = anon_sym_COLONskip,
  [anon_sym_COLONerror] = anon_sym_COLONerror,
  [anon_sym_COLONfail_DASHfast] = anon_sym_COLONfail_DASHfast,
  [anon_sym_COLONplatform] = anon_sym_COLONplatform,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLONlanguage] = anon_sym_COLONlanguage,
  [sym_language] = sym_language,
  [sym_platform] = sym_platform,
  [aux_sym__header_delim_token1] = aux_sym__header_delim_token1,
  [aux_sym__median_token1] = aux_sym__median_token1,
  [sym_suffix__] = sym_suffix__,
  [sym__input_line] = sym__input_line,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [sym__newline] = sym__newline,
  [sym_text] = sym_text,
  [sym_source_file] = sym_source_file,
  [sym_test] = sym_test,
  [sym__test_name] = sym__test_name,
  [sym_attribute] = sym_attribute,
  [sym__language_attribute] = sym__language_attribute,
  [sym__header_delim] = sym__header_delim,
  [sym__header] = sym__header,
  [sym__median] = sym__median,
  [sym__test__] = sym__test__,
  [sym_header_delim__] = sym_header_delim__,
  [sym__header__] = sym__header__,
  [sym__median__] = sym__median__,
  [sym_input] = sym_input,
  [sym_output] = sym_output,
  [sym_node] = sym_node,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym__header_repeat1] = aux_sym__header_repeat1,
  [aux_sym_input_repeat1] = aux_sym_input_repeat1,
  [aux_sym_output_repeat1] = aux_sym_output_repeat1,
  [aux_sym_node_repeat1] = aux_sym_node_repeat1,
  [alias_sym_field_name] = alias_sym_field_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__test_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLONskip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONerror] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONfail_DASHfast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONplatform] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONlanguage] = {
    .visible = true,
    .named = false,
  },
  [sym_language] = {
    .visible = true,
    .named = true,
  },
  [sym_platform] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__header_delim_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__median_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_suffix__] = {
    .visible = true,
    .named = true,
  },
  [sym__input_line] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_test] = {
    .visible = true,
    .named = true,
  },
  [sym__test_name] = {
    .visible = false,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__language_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__header_delim] = {
    .visible = false,
    .named = true,
  },
  [sym__header] = {
    .visible = false,
    .named = true,
  },
  [sym__median] = {
    .visible = false,
    .named = true,
  },
  [sym__test__] = {
    .visible = false,
    .named = true,
  },
  [sym_header_delim__] = {
    .visible = true,
    .named = true,
  },
  [sym__header__] = {
    .visible = false,
    .named = true,
  },
  [sym__median__] = {
    .visible = false,
    .named = true,
  },
  [sym_input] = {
    .visible = true,
    .named = true,
  },
  [sym_output] = {
    .visible = true,
    .named = true,
  },
  [sym_node] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__header_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_input_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_output_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_node_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_field_name] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0, .inherited = true},
  [1] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [3] =
    {field_name, 1, .inherited = true},
  [4] =
    {field_name, 0},
    {field_name, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [5] = {
    [0] = alias_sym_field_name,
  },
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
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 14,
  [18] = 15,
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
  [35] = 27,
  [36] = 36,
  [37] = 37,
  [38] = 25,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 68,
  [70] = 54,
  [71] = 44,
  [72] = 72,
  [73] = 73,
  [74] = 67,
  [75] = 48,
  [76] = 76,
  [77] = 77,
  [78] = 46,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(42);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == ';') ADVANCE(69);
      if (lookahead == '=') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(53);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == ';') ADVANCE(65);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == ';') ADVANCE(65);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == ';') ADVANCE(69);
      if (lookahead == '=') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(57);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == ';') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 8:
      if (lookahead == ';') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 9:
      if (lookahead == ';') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '=') ADVANCE(43);
      END_STATE();
    case 10:
      if (lookahead == ';') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(60);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(14);
      if (lookahead == 'p') ADVANCE(28);
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == 'g') ADVANCE(41);
      END_STATE();
    case 23:
      if (lookahead == 'g') ADVANCE(19);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == 'k') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(6);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 29:
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 33:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 41:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym__test_name_token1);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym__test_name_token1);
      if (lookahead == ';') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '=') ADVANCE(43);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COLONskip);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COLONerror);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COLONfail_DASHfast);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COLONplatform);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_COLONlanguage);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_language);
      if (lookahead == '-') ADVANCE(54);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_language);
      if (lookahead == '-') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_language);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_platform);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__header_delim_token1);
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__median_token1);
      if (lookahead == '-') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__median_token1);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_suffix__);
      if (lookahead == ';') ADVANCE(60);
      if (lookahead == '=') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_suffix__);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__input_line);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__input_line);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__input_line);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__input_line);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__input_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(14);
      if (lookahead == 'p') ADVANCE(28);
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 0, .external_lex_state = 2},
  [20] = {.lex_state = 0, .external_lex_state = 2},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 0, .external_lex_state = 2},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0, .external_lex_state = 2},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 10, .external_lex_state = 2},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 0, .external_lex_state = 2},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 0, .external_lex_state = 2},
  [51] = {.lex_state = 0, .external_lex_state = 2},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0, .external_lex_state = 2},
  [55] = {.lex_state = 0, .external_lex_state = 2},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 0, .external_lex_state = 2},
  [60] = {.lex_state = 0, .external_lex_state = 2},
  [61] = {.lex_state = 0, .external_lex_state = 2},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 0, .external_lex_state = 2},
  [64] = {.lex_state = 0, .external_lex_state = 3},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 0, .external_lex_state = 2},
  [67] = {.lex_state = 0, .external_lex_state = 2},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 0, .external_lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0, .external_lex_state = 2},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLONskip] = ACTIONS(1),
    [anon_sym_COLONerror] = ACTIONS(1),
    [anon_sym_COLONfail_DASHfast] = ACTIONS(1),
    [anon_sym_COLONplatform] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLONlanguage] = ACTIONS(1),
    [sym_language] = ACTIONS(1),
    [sym_platform] = ACTIONS(1),
    [aux_sym__header_delim_token1] = ACTIONS(1),
    [aux_sym__median_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(1),
    [sym_text] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(77),
    [sym_test] = STATE(9),
    [sym__header_delim] = STATE(32),
    [sym__header] = STATE(26),
    [sym__test__] = STATE(33),
    [sym_header_delim__] = STATE(34),
    [sym__header__] = STATE(28),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym_source_file_repeat2] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym__header_delim_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_COLONplatform,
    ACTIONS(13), 1,
      anon_sym_COLONlanguage,
    ACTIONS(15), 1,
      aux_sym__header_delim_token1,
    STATE(55), 1,
      sym__language_attribute,
    STATE(72), 1,
      sym__header_delim,
    STATE(4), 2,
      sym_attribute,
      aux_sym__header_repeat1,
    ACTIONS(9), 3,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
  [28] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_COLONplatform,
    ACTIONS(13), 1,
      anon_sym_COLONlanguage,
    ACTIONS(17), 1,
      aux_sym__header_delim_token1,
    STATE(49), 1,
      sym_header_delim__,
    STATE(55), 1,
      sym__language_attribute,
    STATE(6), 2,
      sym_attribute,
      aux_sym__header_repeat1,
    ACTIONS(9), 3,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
  [56] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_COLONplatform,
    ACTIONS(13), 1,
      anon_sym_COLONlanguage,
    ACTIONS(15), 1,
      aux_sym__header_delim_token1,
    STATE(42), 1,
      sym__header_delim,
    STATE(55), 1,
      sym__language_attribute,
    STATE(6), 2,
      sym_attribute,
      aux_sym__header_repeat1,
    ACTIONS(9), 3,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
  [84] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_COLONplatform,
    ACTIONS(13), 1,
      anon_sym_COLONlanguage,
    ACTIONS(17), 1,
      aux_sym__header_delim_token1,
    STATE(55), 1,
      sym__language_attribute,
    STATE(65), 1,
      sym_header_delim__,
    STATE(3), 2,
      sym_attribute,
      aux_sym__header_repeat1,
    ACTIONS(9), 3,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
  [112] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(22), 1,
      anon_sym_COLONplatform,
    ACTIONS(25), 1,
      anon_sym_COLONlanguage,
    ACTIONS(28), 1,
      aux_sym__header_delim_token1,
    STATE(55), 1,
      sym__language_attribute,
    STATE(6), 2,
      sym_attribute,
      aux_sym__header_repeat1,
    ACTIONS(19), 3,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
  [137] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 1,
      aux_sym__header_delim_token1,
    STATE(26), 1,
      sym__header,
    STATE(32), 1,
      sym__header_delim,
    STATE(7), 2,
      sym_test,
      aux_sym_source_file_repeat1,
  [157] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      aux_sym__header_delim_token1,
    STATE(8), 1,
      aux_sym_source_file_repeat2,
    STATE(28), 1,
      sym__header__,
    STATE(33), 1,
      sym__test__,
    STATE(34), 1,
      sym_header_delim__,
  [179] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 1,
      aux_sym__header_delim_token1,
    STATE(26), 1,
      sym__header,
    STATE(32), 1,
      sym__header_delim,
    STATE(7), 2,
      sym_test,
      aux_sym_source_file_repeat1,
  [199] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 1,
      aux_sym__header_delim_token1,
    STATE(8), 1,
      aux_sym_source_file_repeat2,
    STATE(28), 1,
      sym__header__,
    STATE(33), 1,
      sym__test__,
    STATE(34), 1,
      sym_header_delim__,
  [221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 6,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
      anon_sym_COLONplatform,
      anon_sym_COLONlanguage,
      aux_sym__header_delim_token1,
  [233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 6,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
      anon_sym_COLONplatform,
      anon_sym_COLONlanguage,
      aux_sym__header_delim_token1,
  [245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 6,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
      anon_sym_COLONplatform,
      anon_sym_COLONlanguage,
      aux_sym__header_delim_token1,
  [257] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(56), 1,
      anon_sym_RPAREN,
    ACTIONS(58), 1,
      sym_identifier,
    STATE(16), 2,
      sym_node,
      aux_sym_node_repeat1,
  [274] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_identifier,
    ACTIONS(60), 1,
      anon_sym_RPAREN,
    STATE(14), 2,
      sym_node,
      aux_sym_node_repeat1,
  [291] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 1,
      sym_identifier,
    STATE(16), 2,
      sym_node,
      aux_sym_node_repeat1,
  [308] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_identifier,
    ACTIONS(70), 1,
      anon_sym_RPAREN,
    STATE(16), 2,
      sym_node,
      aux_sym_node_repeat1,
  [325] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      sym_identifier,
    ACTIONS(72), 1,
      anon_sym_RPAREN,
    STATE(17), 2,
      sym_node,
      aux_sym_node_repeat1,
  [342] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      sym__newline,
    STATE(19), 2,
      sym_node,
      aux_sym_output_repeat1,
  [356] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      sym__newline,
    STATE(19), 2,
      sym_node,
      aux_sym_output_repeat1,
  [370] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_output,
    STATE(20), 2,
      sym_node,
      aux_sym_output_repeat1,
  [384] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(51), 1,
      sym_output,
    STATE(20), 2,
      sym_node,
      aux_sym_output_repeat1,
  [398] = 4,
    ACTIONS(83), 1,
      aux_sym__median_token1,
    ACTIONS(85), 1,
      sym__input_line,
    ACTIONS(87), 1,
      sym_comment,
    STATE(29), 1,
      aux_sym_input_repeat1,
  [411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [429] = 4,
    ACTIONS(87), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym__input_line,
    STATE(23), 1,
      aux_sym_input_repeat1,
    STATE(41), 1,
      sym_input,
  [442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [451] = 4,
    ACTIONS(87), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym__input_line,
    STATE(23), 1,
      aux_sym_input_repeat1,
    STATE(30), 1,
      sym_input,
  [464] = 4,
    ACTIONS(87), 1,
      sym_comment,
    ACTIONS(97), 1,
      aux_sym__median_token1,
    ACTIONS(99), 1,
      sym__input_line,
    STATE(29), 1,
      aux_sym_input_repeat1,
  [477] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      aux_sym__median_token1,
    STATE(22), 1,
      sym__median__,
  [487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      aux_sym__header_delim_token1,
  [495] = 3,
    ACTIONS(87), 1,
      sym_comment,
    ACTIONS(106), 1,
      aux_sym__test_name_token1,
    STATE(2), 1,
      sym__test_name,
  [505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      aux_sym__header_delim_token1,
  [513] = 3,
    ACTIONS(87), 1,
      sym_comment,
    ACTIONS(106), 1,
      aux_sym__test_name_token1,
    STATE(5), 1,
      sym__test_name,
  [523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 2,
      sym__newline,
      anon_sym_LPAREN,
  [531] = 2,
    ACTIONS(87), 1,
      sym_comment,
    ACTIONS(97), 2,
      aux_sym__median_token1,
      sym__input_line,
  [539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym_node,
  [549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 2,
      sym__newline,
      anon_sym_LPAREN,
  [557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      aux_sym__header_delim_token1,
  [565] = 3,
    ACTIONS(87), 1,
      sym_comment,
    ACTIONS(112), 1,
      sym_suffix__,
    ACTIONS(114), 1,
      sym__newline,
  [575] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      aux_sym__median_token1,
    STATE(21), 1,
      sym__median,
  [585] = 2,
    ACTIONS(87), 1,
      sym_comment,
    ACTIONS(118), 1,
      sym__input_line,
  [592] = 2,
    ACTIONS(87), 1,
      sym_comment,
    ACTIONS(120), 1,
      sym_suffix__,
  [599] = 2,
    ACTIONS(87), 1,
      sym_comment,
    ACTIONS(122), 1,
      aux_sym__test_name_token1,
  [606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
  [613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      sym_identifier,
  [620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      sym__newline,
  [627] = 2,
    ACTIONS(87), 1,
      sym_comment,
    ACTIONS(112), 1,
      sym_suffix__,
  [634] = 2,
    ACTIONS(87), 1,
      sym_comment,
    ACTIONS(130), 1,
      sym__input_line,
  [641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      sym__newline,
  [648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym__newline,
  [655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_RPAREN,
  [662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
  [669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym__newline,
  [676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      sym__newline,
  [683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      sym_language,
  [690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
  [697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym_platform,
  [704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym__newline,
  [711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      sym__newline,
  [718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym__newline,
  [725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_COLON,
  [732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym__newline,
  [739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      sym_text,
  [746] = 2,
    ACTIONS(87), 1,
      sym_comment,
    ACTIONS(160), 1,
      sym__input_line,
  [753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym__newline,
  [760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      sym__newline,
  [767] = 2,
    ACTIONS(87), 1,
      sym_comment,
    ACTIONS(166), 1,
      aux_sym__test_name_token1,
  [774] = 2,
    ACTIONS(87), 1,
      sym_comment,
    ACTIONS(166), 1,
      sym__input_line,
  [781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym__newline,
  [788] = 2,
    ACTIONS(87), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__input_line,
  [795] = 2,
    ACTIONS(87), 1,
      sym_comment,
    ACTIONS(170), 1,
      sym__input_line,
  [802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
  [809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      sym__newline,
  [816] = 2,
    ACTIONS(87), 1,
      sym_comment,
    ACTIONS(176), 1,
      sym_suffix__,
  [823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
  [830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
  [837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 112,
  [SMALL_STATE(7)] = 137,
  [SMALL_STATE(8)] = 157,
  [SMALL_STATE(9)] = 179,
  [SMALL_STATE(10)] = 199,
  [SMALL_STATE(11)] = 221,
  [SMALL_STATE(12)] = 233,
  [SMALL_STATE(13)] = 245,
  [SMALL_STATE(14)] = 257,
  [SMALL_STATE(15)] = 274,
  [SMALL_STATE(16)] = 291,
  [SMALL_STATE(17)] = 308,
  [SMALL_STATE(18)] = 325,
  [SMALL_STATE(19)] = 342,
  [SMALL_STATE(20)] = 356,
  [SMALL_STATE(21)] = 370,
  [SMALL_STATE(22)] = 384,
  [SMALL_STATE(23)] = 398,
  [SMALL_STATE(24)] = 411,
  [SMALL_STATE(25)] = 420,
  [SMALL_STATE(26)] = 429,
  [SMALL_STATE(27)] = 442,
  [SMALL_STATE(28)] = 451,
  [SMALL_STATE(29)] = 464,
  [SMALL_STATE(30)] = 477,
  [SMALL_STATE(31)] = 487,
  [SMALL_STATE(32)] = 495,
  [SMALL_STATE(33)] = 505,
  [SMALL_STATE(34)] = 513,
  [SMALL_STATE(35)] = 523,
  [SMALL_STATE(36)] = 531,
  [SMALL_STATE(37)] = 539,
  [SMALL_STATE(38)] = 549,
  [SMALL_STATE(39)] = 557,
  [SMALL_STATE(40)] = 565,
  [SMALL_STATE(41)] = 575,
  [SMALL_STATE(42)] = 585,
  [SMALL_STATE(43)] = 592,
  [SMALL_STATE(44)] = 599,
  [SMALL_STATE(45)] = 606,
  [SMALL_STATE(46)] = 613,
  [SMALL_STATE(47)] = 620,
  [SMALL_STATE(48)] = 627,
  [SMALL_STATE(49)] = 634,
  [SMALL_STATE(50)] = 641,
  [SMALL_STATE(51)] = 648,
  [SMALL_STATE(52)] = 655,
  [SMALL_STATE(53)] = 662,
  [SMALL_STATE(54)] = 669,
  [SMALL_STATE(55)] = 676,
  [SMALL_STATE(56)] = 683,
  [SMALL_STATE(57)] = 690,
  [SMALL_STATE(58)] = 697,
  [SMALL_STATE(59)] = 704,
  [SMALL_STATE(60)] = 711,
  [SMALL_STATE(61)] = 718,
  [SMALL_STATE(62)] = 725,
  [SMALL_STATE(63)] = 732,
  [SMALL_STATE(64)] = 739,
  [SMALL_STATE(65)] = 746,
  [SMALL_STATE(66)] = 753,
  [SMALL_STATE(67)] = 760,
  [SMALL_STATE(68)] = 767,
  [SMALL_STATE(69)] = 774,
  [SMALL_STATE(70)] = 781,
  [SMALL_STATE(71)] = 788,
  [SMALL_STATE(72)] = 795,
  [SMALL_STATE(73)] = 802,
  [SMALL_STATE(74)] = 809,
  [SMALL_STATE(75)] = 816,
  [SMALL_STATE(76)] = 823,
  [SMALL_STATE(77)] = 830,
  [SMALL_STATE(78)] = 837,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__header_repeat1, 2), SHIFT_REPEAT(55),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__header_repeat1, 2), SHIFT_REPEAT(76),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__header_repeat1, 2), SHIFT_REPEAT(73),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__header_repeat1, 2),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 2), SHIFT_REPEAT(48),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__test_name, 3, .production_id = 4),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 5),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(78),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(62),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_repeat1, 2), SHIFT_REPEAT(46),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_repeat1, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 3, .production_id = 5),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_input_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_input_repeat1, 2), SHIFT_REPEAT(63),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 5, .production_id = 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 1, .production_id = 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__test__, 5, .production_id = 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 4, .production_id = 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_delim__, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__median, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header__, 4, .production_id = 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__median__, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__language_attribute, 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header__, 3, .production_id = 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header_delim, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 3, .production_id = 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [180] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__newline = 0,
  ts_external_token_text = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token_text] = sym_text,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token_text] = true,
  },
  [2] = {
    [ts_external_token__newline] = true,
  },
  [3] = {
    [ts_external_token_text] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_corpus_external_scanner_create(void);
void tree_sitter_corpus_external_scanner_destroy(void *);
bool tree_sitter_corpus_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_corpus_external_scanner_serialize(void *, char *);
void tree_sitter_corpus_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_corpus() {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_corpus_external_scanner_create,
      tree_sitter_corpus_external_scanner_destroy,
      tree_sitter_corpus_external_scanner_scan,
      tree_sitter_corpus_external_scanner_serialize,
      tree_sitter_corpus_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
