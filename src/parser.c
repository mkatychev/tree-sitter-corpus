#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  aux_sym__header_token1 = 1,
  aux_sym__median_token1 = 2,
  sym__input_line = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  sym_identifier = 6,
  anon_sym_COLON = 7,
  sym__newline = 8,
  sym_text = 9,
  sym_source_file = 10,
  sym_test = 11,
  sym__header = 12,
  sym__median = 13,
  sym_input = 14,
  sym_output = 15,
  sym__node_expression = 16,
  sym_node = 17,
  sym__field_name = 18,
  sym_field_definition = 19,
  aux_sym_source_file_repeat1 = 20,
  aux_sym_input_repeat1 = 21,
  aux_sym_output_repeat1 = 22,
  aux_sym_node_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__header_token1] = "_header_token1",
  [aux_sym__median_token1] = "_median_token1",
  [sym__input_line] = "_input_line",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_identifier] = "identifier",
  [anon_sym_COLON] = ":",
  [sym__newline] = "_newline",
  [sym_text] = "text",
  [sym_source_file] = "source_file",
  [sym_test] = "test",
  [sym__header] = "_header",
  [sym__median] = "_median",
  [sym_input] = "input",
  [sym_output] = "output",
  [sym__node_expression] = "_node_expression",
  [sym_node] = "node",
  [sym__field_name] = "_field_name",
  [sym_field_definition] = "field_definition",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_input_repeat1] = "input_repeat1",
  [aux_sym_output_repeat1] = "output_repeat1",
  [aux_sym_node_repeat1] = "node_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__header_token1] = aux_sym__header_token1,
  [aux_sym__median_token1] = aux_sym__median_token1,
  [sym__input_line] = sym__input_line,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_identifier] = sym_identifier,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym__newline] = sym__newline,
  [sym_text] = sym_text,
  [sym_source_file] = sym_source_file,
  [sym_test] = sym_test,
  [sym__header] = sym__header,
  [sym__median] = sym__median,
  [sym_input] = sym_input,
  [sym_output] = sym_output,
  [sym__node_expression] = sym__node_expression,
  [sym_node] = sym_node,
  [sym__field_name] = sym__field_name,
  [sym_field_definition] = sym_field_definition,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_input_repeat1] = aux_sym_input_repeat1,
  [aux_sym_output_repeat1] = aux_sym_output_repeat1,
  [aux_sym_node_repeat1] = aux_sym_node_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__header_token1] = {
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
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
  [sym__node_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_node] = {
    .visible = true,
    .named = true,
  },
  [sym__field_name] = {
    .visible = false,
    .named = true,
  },
  [sym_field_definition] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
    {field_name, 1},
  [1] =
    {field_name, 0, .inherited = true},
  [2] =
    {field_name, 0},
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
  [5] = 2,
  [6] = 3,
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
  [17] = 17,
  [18] = 18,
  [19] = 17,
  [20] = 16,
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
  [35] = 35,
  [36] = 36,
  [37] = 34,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == '(') ADVANCE(16);
      if (lookahead == ')') ADVANCE(17);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '=') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '-') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(5);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym__header_token1);
      if (lookahead == '=') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym__median_token1);
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym__median_token1);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym__input_line);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym__input_line);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__input_line);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__input_line);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__input_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0, .external_lex_state = 2},
  [12] = {.lex_state = 0, .external_lex_state = 2},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0, .external_lex_state = 2},
  [20] = {.lex_state = 0, .external_lex_state = 2},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0, .external_lex_state = 2},
  [27] = {.lex_state = 0, .external_lex_state = 2},
  [28] = {.lex_state = 0, .external_lex_state = 2},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 0, .external_lex_state = 3},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__header_token1] = ACTIONS(1),
    [aux_sym__median_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym_text] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(36),
    [sym_test] = STATE(8),
    [sym__header] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__header_token1] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_RPAREN,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(7), 1,
      sym__field_name,
    STATE(4), 4,
      sym__node_expression,
      sym_node,
      sym_field_definition,
      aux_sym_node_repeat1,
  [19] = 5,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      sym__field_name,
    STATE(2), 4,
      sym__node_expression,
      sym_node,
      sym_field_definition,
      aux_sym_node_repeat1,
  [38] = 5,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(18), 1,
      anon_sym_RPAREN,
    ACTIONS(20), 1,
      sym_identifier,
    STATE(7), 1,
      sym__field_name,
    STATE(4), 4,
      sym__node_expression,
      sym_node,
      sym_field_definition,
      aux_sym_node_repeat1,
  [57] = 5,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      sym__field_name,
    STATE(4), 4,
      sym__node_expression,
      sym_node,
      sym_field_definition,
      aux_sym_node_repeat1,
  [76] = 5,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      sym__field_name,
    STATE(5), 4,
      sym__node_expression,
      sym_node,
      sym_field_definition,
      aux_sym_node_repeat1,
  [95] = 4,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(7), 1,
      sym__field_name,
    STATE(18), 3,
      sym__node_expression,
      sym_node,
      sym_field_definition,
  [110] = 4,
    ACTIONS(5), 1,
      aux_sym__header_token1,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      sym__header,
    STATE(9), 2,
      sym_test,
      aux_sym_source_file_repeat1,
  [124] = 4,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      aux_sym__header_token1,
    STATE(15), 1,
      sym__header,
    STATE(9), 2,
      sym_test,
      aux_sym_source_file_repeat1,
  [138] = 3,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_output,
    STATE(12), 2,
      sym_node,
      aux_sym_output_repeat1,
  [149] = 3,
    ACTIONS(36), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym__newline,
    STATE(11), 2,
      sym_node,
      aux_sym_output_repeat1,
  [160] = 3,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym__newline,
    STATE(11), 2,
      sym_node,
      aux_sym_output_repeat1,
  [171] = 3,
    ACTIONS(43), 1,
      aux_sym__median_token1,
    ACTIONS(45), 1,
      sym__input_line,
    STATE(14), 1,
      aux_sym_input_repeat1,
  [181] = 3,
    ACTIONS(47), 1,
      aux_sym__median_token1,
    ACTIONS(49), 1,
      sym__input_line,
    STATE(14), 1,
      aux_sym_input_repeat1,
  [191] = 3,
    ACTIONS(52), 1,
      sym__input_line,
    STATE(13), 1,
      aux_sym_input_repeat1,
    STATE(24), 1,
      sym_input,
  [201] = 1,
    ACTIONS(54), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [207] = 1,
    ACTIONS(56), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [213] = 1,
    ACTIONS(58), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [219] = 1,
    ACTIONS(56), 2,
      sym__newline,
      anon_sym_LPAREN,
  [224] = 1,
    ACTIONS(54), 2,
      sym__newline,
      anon_sym_LPAREN,
  [229] = 1,
    ACTIONS(60), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [234] = 1,
    ACTIONS(47), 2,
      aux_sym__median_token1,
      sym__input_line,
  [239] = 1,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      aux_sym__header_token1,
  [244] = 2,
    ACTIONS(64), 1,
      aux_sym__median_token1,
    STATE(10), 1,
      sym__median,
  [251] = 1,
    ACTIONS(66), 1,
      anon_sym_COLON,
  [255] = 1,
    ACTIONS(68), 1,
      sym__newline,
  [259] = 1,
    ACTIONS(70), 1,
      sym__newline,
  [263] = 1,
    ACTIONS(72), 1,
      sym__newline,
  [267] = 1,
    ACTIONS(74), 1,
      aux_sym__header_token1,
  [271] = 1,
    ACTIONS(76), 1,
      sym__input_line,
  [275] = 1,
    ACTIONS(78), 1,
      sym_text,
  [279] = 1,
    ACTIONS(80), 1,
      sym__newline,
  [283] = 1,
    ACTIONS(82), 1,
      sym__newline,
  [287] = 1,
    ACTIONS(84), 1,
      sym_identifier,
  [291] = 1,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
  [295] = 1,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
  [299] = 1,
    ACTIONS(90), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 38,
  [SMALL_STATE(5)] = 57,
  [SMALL_STATE(6)] = 76,
  [SMALL_STATE(7)] = 95,
  [SMALL_STATE(8)] = 110,
  [SMALL_STATE(9)] = 124,
  [SMALL_STATE(10)] = 138,
  [SMALL_STATE(11)] = 149,
  [SMALL_STATE(12)] = 160,
  [SMALL_STATE(13)] = 171,
  [SMALL_STATE(14)] = 181,
  [SMALL_STATE(15)] = 191,
  [SMALL_STATE(16)] = 201,
  [SMALL_STATE(17)] = 207,
  [SMALL_STATE(18)] = 213,
  [SMALL_STATE(19)] = 219,
  [SMALL_STATE(20)] = 224,
  [SMALL_STATE(21)] = 229,
  [SMALL_STATE(22)] = 234,
  [SMALL_STATE(23)] = 239,
  [SMALL_STATE(24)] = 244,
  [SMALL_STATE(25)] = 251,
  [SMALL_STATE(26)] = 255,
  [SMALL_STATE(27)] = 259,
  [SMALL_STATE(28)] = 263,
  [SMALL_STATE(29)] = 267,
  [SMALL_STATE(30)] = 271,
  [SMALL_STATE(31)] = 275,
  [SMALL_STATE(32)] = 279,
  [SMALL_STATE(33)] = 283,
  [SMALL_STATE(34)] = 287,
  [SMALL_STATE(35)] = 291,
  [SMALL_STATE(36)] = 295,
  [SMALL_STATE(37)] = 299,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(37),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(25),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_repeat1, 2), SHIFT_REPEAT(34),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_repeat1, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_input_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_input_repeat1, 2), SHIFT_REPEAT(28),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3, .production_id = 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 2, .production_id = 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_name, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 5, .production_id = 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 5, .production_id = 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__median, 2),
  [88] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
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
