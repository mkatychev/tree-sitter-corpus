#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 1
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  anon_sym_COLONskip = 1,
  anon_sym_COLONerror = 2,
  anon_sym_COLONfail_DASHfast = 3,
  anon_sym_COLONplatform = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_COLONlanguage = 7,
  sym_language = 8,
  sym_platform = 9,
  aux_sym__header_delim_token1 = 10,
  aux_sym__median_token1 = 11,
  sym__input_line = 12,
  anon_sym_COLON = 13,
  sym_identifier = 14,
  sym_comment = 15,
  sym__newline = 16,
  sym_text = 17,
  sym_source_file = 18,
  sym_test = 19,
  sym__test_name = 20,
  sym__marker = 21,
  sym__language_marker = 22,
  sym__header_delim = 23,
  sym__header = 24,
  sym__median = 25,
  sym_input = 26,
  sym_output = 27,
  sym_node = 28,
  aux_sym_source_file_repeat1 = 29,
  aux_sym__header_repeat1 = 30,
  aux_sym_input_repeat1 = 31,
  aux_sym_output_repeat1 = 32,
  aux_sym_node_repeat1 = 33,
  alias_sym_field_name = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [sym__input_line] = "_input_line",
  [anon_sym_COLON] = ":",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym__newline] = "_newline",
  [sym_text] = "text",
  [sym_source_file] = "source_file",
  [sym_test] = "test",
  [sym__test_name] = "_test_name",
  [sym__marker] = "_marker",
  [sym__language_marker] = "_language_marker",
  [sym__header_delim] = "_header_delim",
  [sym__header] = "_header",
  [sym__median] = "_median",
  [sym_input] = "input",
  [sym_output] = "output",
  [sym_node] = "node",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__header_repeat1] = "_header_repeat1",
  [aux_sym_input_repeat1] = "input_repeat1",
  [aux_sym_output_repeat1] = "output_repeat1",
  [aux_sym_node_repeat1] = "node_repeat1",
  [alias_sym_field_name] = "field_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [sym__input_line] = sym__input_line,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [sym__newline] = sym__newline,
  [sym_text] = sym_text,
  [sym_source_file] = sym_source_file,
  [sym_test] = sym_test,
  [sym__test_name] = sym__test_name,
  [sym__marker] = sym__marker,
  [sym__language_marker] = sym__language_marker,
  [sym__header_delim] = sym__header_delim,
  [sym__header] = sym__header,
  [sym__median] = sym__median,
  [sym_input] = sym_input,
  [sym_output] = sym_output,
  [sym_node] = sym_node,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [sym__marker] = {
    .visible = false,
    .named = true,
  },
  [sym__language_marker] = {
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
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 1, .inherited = true},
  [2] =
    {field_name, 0, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
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
  [12] = 10,
  [13] = 13,
  [14] = 13,
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
  [25] = 21,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 18,
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
  [51] = 37,
  [52] = 48,
  [53] = 53,
  [54] = 35,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(40);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == ';') ADVANCE(63);
      if (lookahead == '=') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(49);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == ';') ADVANCE(59);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == ';') ADVANCE(59);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == ';') ADVANCE(63);
      if (lookahead == '=') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(53);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == ';') ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 8:
      if (lookahead == ';') ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'l') ADVANCE(12);
      if (lookahead == 'p') ADVANCE(26);
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == 'g') ADVANCE(39);
      END_STATE();
    case 21:
      if (lookahead == 'g') ADVANCE(17);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == 'k') ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(6);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 27:
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COLONskip);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COLONerror);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COLONfail_DASHfast);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COLONplatform);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COLONlanguage);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_language);
      if (lookahead == '-') ADVANCE(50);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_language);
      if (lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_language);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_platform);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym__header_delim_token1);
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__median_token1);
      if (lookahead == '-') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__median_token1);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__input_line);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == ';') ADVANCE(59);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__input_line);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__input_line);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__input_line);
      if (lookahead == ';') ADVANCE(59);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__input_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'l') ADVANCE(12);
      if (lookahead == 'p') ADVANCE(26);
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
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
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0, .external_lex_state = 2},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0, .external_lex_state = 2},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0, .external_lex_state = 2},
  [30] = {.lex_state = 0, .external_lex_state = 3},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 0, .external_lex_state = 2},
  [37] = {.lex_state = 0, .external_lex_state = 2},
  [38] = {.lex_state = 0, .external_lex_state = 2},
  [39] = {.lex_state = 0, .external_lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 0, .external_lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0, .external_lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 0, .external_lex_state = 2},
  [50] = {.lex_state = 0, .external_lex_state = 2},
  [51] = {.lex_state = 0, .external_lex_state = 2},
  [52] = {.lex_state = 0, .external_lex_state = 3},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 3},
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
    [sym_source_file] = STATE(53),
    [sym_test] = STATE(7),
    [sym__header_delim] = STATE(30),
    [sym__header] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(7),
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
    STATE(40), 1,
      sym__header_delim,
    STATE(47), 1,
      sym__language_marker,
    STATE(4), 2,
      sym__marker,
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
    ACTIONS(15), 1,
      aux_sym__header_delim_token1,
    STATE(44), 1,
      sym__header_delim,
    STATE(47), 1,
      sym__language_marker,
    STATE(2), 2,
      sym__marker,
      aux_sym__header_repeat1,
    ACTIONS(9), 3,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
  [56] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(20), 1,
      anon_sym_COLONplatform,
    ACTIONS(23), 1,
      anon_sym_COLONlanguage,
    ACTIONS(26), 1,
      aux_sym__header_delim_token1,
    STATE(47), 1,
      sym__language_marker,
    STATE(4), 2,
      sym__marker,
      aux_sym__header_repeat1,
    ACTIONS(17), 3,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
  [81] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 6,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
      anon_sym_COLONplatform,
      anon_sym_COLONlanguage,
      aux_sym__header_delim_token1,
  [93] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 6,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
      anon_sym_COLONplatform,
      anon_sym_COLONlanguage,
      aux_sym__header_delim_token1,
  [105] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym__header_delim_token1,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      sym__header,
    STATE(30), 1,
      sym__header_delim,
    STATE(9), 2,
      sym_test,
      aux_sym_source_file_repeat1,
  [125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 6,
      anon_sym_COLONskip,
      anon_sym_COLONerror,
      anon_sym_COLONfail_DASHfast,
      anon_sym_COLONplatform,
      anon_sym_COLONlanguage,
      aux_sym__header_delim_token1,
  [137] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      aux_sym__header_delim_token1,
    STATE(23), 1,
      sym__header,
    STATE(30), 1,
      sym__header_delim,
    STATE(9), 2,
      sym_test,
      aux_sym_source_file_repeat1,
  [157] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    ACTIONS(45), 1,
      sym_identifier,
    STATE(11), 2,
      sym_node,
      aux_sym_node_repeat1,
  [174] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_RPAREN,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(11), 2,
      sym_node,
      aux_sym_node_repeat1,
  [191] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    STATE(11), 2,
      sym_node,
      aux_sym_node_repeat1,
  [208] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    STATE(12), 2,
      sym_node,
      aux_sym_node_repeat1,
  [225] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    STATE(10), 2,
      sym_node,
      aux_sym_node_repeat1,
  [242] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_output,
    STATE(17), 2,
      sym_node,
      aux_sym_output_repeat1,
  [256] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      sym__newline,
    STATE(16), 2,
      sym_node,
      aux_sym_output_repeat1,
  [270] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(68), 1,
      sym__newline,
    STATE(16), 2,
      sym_node,
      aux_sym_output_repeat1,
  [284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [302] = 4,
    ACTIONS(74), 1,
      aux_sym__median_token1,
    ACTIONS(76), 1,
      sym__input_line,
    ACTIONS(78), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym_input_repeat1,
  [315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [324] = 4,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(82), 1,
      aux_sym__median_token1,
    ACTIONS(84), 1,
      sym__input_line,
    STATE(22), 1,
      aux_sym_input_repeat1,
  [337] = 4,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(87), 1,
      sym__input_line,
    STATE(20), 1,
      aux_sym_input_repeat1,
    STATE(24), 1,
      sym_input,
  [350] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      aux_sym__median_token1,
    STATE(15), 1,
      sym__median,
  [360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 2,
      sym__newline,
      anon_sym_LPAREN,
  [368] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_node,
  [378] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(82), 2,
      aux_sym__median_token1,
      sym__input_line,
  [386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      aux_sym__header_delim_token1,
  [394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 2,
      sym__newline,
      anon_sym_LPAREN,
  [402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_text,
    STATE(3), 1,
      sym__test_name,
  [412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_language,
  [419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
  [426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_RPAREN,
  [433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
  [440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      sym_identifier,
  [447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      sym__newline,
  [454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym__newline,
  [461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym__newline,
  [468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      sym__newline,
  [475] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym__input_line,
  [482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_COLON,
  [489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym_platform,
  [496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      sym__newline,
  [503] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym__input_line,
  [510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
  [517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
  [524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      sym__newline,
  [531] = 2,
    ACTIONS(78), 1,
      sym_comment,
    ACTIONS(129), 1,
      sym__input_line,
  [538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym__newline,
  [545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      sym__newline,
  [552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      sym__newline,
  [559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      sym_text,
  [566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
  [573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 81,
  [SMALL_STATE(6)] = 93,
  [SMALL_STATE(7)] = 105,
  [SMALL_STATE(8)] = 125,
  [SMALL_STATE(9)] = 137,
  [SMALL_STATE(10)] = 157,
  [SMALL_STATE(11)] = 174,
  [SMALL_STATE(12)] = 191,
  [SMALL_STATE(13)] = 208,
  [SMALL_STATE(14)] = 225,
  [SMALL_STATE(15)] = 242,
  [SMALL_STATE(16)] = 256,
  [SMALL_STATE(17)] = 270,
  [SMALL_STATE(18)] = 284,
  [SMALL_STATE(19)] = 293,
  [SMALL_STATE(20)] = 302,
  [SMALL_STATE(21)] = 315,
  [SMALL_STATE(22)] = 324,
  [SMALL_STATE(23)] = 337,
  [SMALL_STATE(24)] = 350,
  [SMALL_STATE(25)] = 360,
  [SMALL_STATE(26)] = 368,
  [SMALL_STATE(27)] = 378,
  [SMALL_STATE(28)] = 386,
  [SMALL_STATE(29)] = 394,
  [SMALL_STATE(30)] = 402,
  [SMALL_STATE(31)] = 412,
  [SMALL_STATE(32)] = 419,
  [SMALL_STATE(33)] = 426,
  [SMALL_STATE(34)] = 433,
  [SMALL_STATE(35)] = 440,
  [SMALL_STATE(36)] = 447,
  [SMALL_STATE(37)] = 454,
  [SMALL_STATE(38)] = 461,
  [SMALL_STATE(39)] = 468,
  [SMALL_STATE(40)] = 475,
  [SMALL_STATE(41)] = 482,
  [SMALL_STATE(42)] = 489,
  [SMALL_STATE(43)] = 496,
  [SMALL_STATE(44)] = 503,
  [SMALL_STATE(45)] = 510,
  [SMALL_STATE(46)] = 517,
  [SMALL_STATE(47)] = 524,
  [SMALL_STATE(48)] = 531,
  [SMALL_STATE(49)] = 538,
  [SMALL_STATE(50)] = 545,
  [SMALL_STATE(51)] = 552,
  [SMALL_STATE(52)] = 559,
  [SMALL_STATE(53)] = 566,
  [SMALL_STATE(54)] = 573,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__header_repeat1, 2), SHIFT_REPEAT(47),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__header_repeat1, 2), SHIFT_REPEAT(46),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__header_repeat1, 2), SHIFT_REPEAT(45),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__header_repeat1, 2),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__test_name, 2, .production_id = 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker, 2),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marker, 5),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(54),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(41),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_repeat1, 2), SHIFT_REPEAT(35),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_repeat1, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 3, .production_id = 4),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input, 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_input_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_input_repeat1, 2), SHIFT_REPEAT(49),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 5, .production_id = 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__median, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__language_marker, 4),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 4, .production_id = 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 3, .production_id = 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header_delim, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [137] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
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
