#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 43
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  aux_sym__median_token1 = 1,
  aux_sym__header_delim_token1 = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  sym_identifier = 5,
  anon_sym_COLON = 6,
  sym__newline = 7,
  sym_text = 8,
  sym_source_file = 9,
  sym_test = 10,
  sym__header_delim = 11,
  sym__header = 12,
  sym__median = 13,
  aux_sym__input_line = 14,
  sym_input = 15,
  sym_output = 16,
  sym__node_expression = 17,
  sym_node = 18,
  sym__field_name = 19,
  sym_field_definition = 20,
  aux_sym_source_file_repeat1 = 21,
  aux_sym_input_repeat1 = 22,
  aux_sym_output_repeat1 = 23,
  aux_sym_node_repeat1 = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__median_token1] = "_median_token1",
  [aux_sym__header_delim_token1] = "_header_delim_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_identifier] = "identifier",
  [anon_sym_COLON] = ":",
  [sym__newline] = "_newline",
  [sym_text] = "text",
  [sym_source_file] = "source_file",
  [sym_test] = "test",
  [sym__header_delim] = "_header_delim",
  [sym__header] = "_header",
  [sym__median] = "_median",
  [aux_sym__input_line] = "_input_line",
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
  [aux_sym__median_token1] = aux_sym__median_token1,
  [aux_sym__header_delim_token1] = aux_sym__header_delim_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_identifier] = sym_identifier,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym__newline] = sym__newline,
  [sym_text] = sym_text,
  [sym_source_file] = sym_source_file,
  [sym_test] = sym_test,
  [sym__header_delim] = sym__header_delim,
  [sym__header] = sym__header,
  [sym__median] = sym__median,
  [aux_sym__input_line] = aux_sym__input_line,
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
  [aux_sym__median_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__header_delim_token1] = {
    .visible = false,
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
  [aux_sym__input_line] = {
    .visible = false,
    .named = false,
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
  [4] = 2,
  [5] = 5,
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
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 19,
  [23] = 17,
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
  [36] = 30,
  [37] = 37,
  [38] = 38,
  [39] = 32,
  [40] = 40,
  [41] = 41,
  [42] = 34,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '(') ADVANCE(8);
      if (lookahead == ')') ADVANCE(9);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == '=') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(3);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym__header_delim_token1);
      if (lookahead == '=') ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym__median_token1);
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(ts_builtin_sym_end);
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
  [10] = {.lex_state = 0, .external_lex_state = 1},
  [11] = {.lex_state = 0, .external_lex_state = 1},
  [12] = {.lex_state = 0, .external_lex_state = 1},
  [13] = {.lex_state = 0, .external_lex_state = 2},
  [14] = {.lex_state = 0, .external_lex_state = 2},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0, .external_lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0, .external_lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0, .external_lex_state = 1},
  [22] = {.lex_state = 0, .external_lex_state = 2},
  [23] = {.lex_state = 0, .external_lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0, .external_lex_state = 2},
  [30] = {.lex_state = 0, .external_lex_state = 3},
  [31] = {.lex_state = 0, .external_lex_state = 2},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0, .external_lex_state = 2},
  [36] = {.lex_state = 0, .external_lex_state = 2},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0, .external_lex_state = 2},
  [39] = {.lex_state = 0, .external_lex_state = 2},
  [40] = {.lex_state = 0, .external_lex_state = 3},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__median_token1] = ACTIONS(1),
    [aux_sym__header_delim_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym_text] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(41),
    [sym_test] = STATE(9),
    [sym__header_delim] = STATE(40),
    [sym__header] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__header_delim_token1] = ACTIONS(5),
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
    STATE(6), 4,
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
    STATE(5), 4,
      sym__node_expression,
      sym_node,
      sym_field_definition,
      aux_sym_node_repeat1,
  [38] = 5,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      sym__field_name,
    STATE(3), 4,
      sym__node_expression,
      sym_node,
      sym_field_definition,
      aux_sym_node_repeat1,
  [57] = 5,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(20), 1,
      anon_sym_RPAREN,
    ACTIONS(22), 1,
      sym_identifier,
    STATE(7), 1,
      sym__field_name,
    STATE(5), 4,
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
    STATE(20), 3,
      sym__node_expression,
      sym_node,
      sym_field_definition,
  [110] = 5,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      aux_sym__header_delim_token1,
    STATE(35), 1,
      sym__header,
    STATE(40), 1,
      sym__header_delim,
    STATE(8), 2,
      sym_test,
      aux_sym_source_file_repeat1,
  [127] = 5,
    ACTIONS(5), 1,
      aux_sym__header_delim_token1,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    STATE(35), 1,
      sym__header,
    STATE(40), 1,
      sym__header_delim,
    STATE(8), 2,
      sym_test,
      aux_sym_source_file_repeat1,
  [144] = 5,
    ACTIONS(34), 1,
      aux_sym__median_token1,
    ACTIONS(36), 1,
      sym__newline,
    ACTIONS(39), 1,
      sym_text,
    STATE(10), 1,
      aux_sym_input_repeat1,
    STATE(21), 1,
      aux_sym__input_line,
  [160] = 5,
    ACTIONS(42), 1,
      sym__newline,
    ACTIONS(44), 1,
      sym_text,
    STATE(12), 1,
      aux_sym_input_repeat1,
    STATE(21), 1,
      aux_sym__input_line,
    STATE(27), 1,
      sym_input,
  [176] = 5,
    ACTIONS(44), 1,
      sym_text,
    ACTIONS(46), 1,
      aux_sym__median_token1,
    ACTIONS(48), 1,
      sym__newline,
    STATE(10), 1,
      aux_sym_input_repeat1,
    STATE(21), 1,
      aux_sym__input_line,
  [192] = 3,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      sym__newline,
    STATE(13), 2,
      sym_node,
      aux_sym_output_repeat1,
  [203] = 3,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      sym__newline,
    STATE(13), 2,
      sym_node,
      aux_sym_output_repeat1,
  [214] = 3,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_output,
    STATE(14), 2,
      sym_node,
      aux_sym_output_repeat1,
  [225] = 1,
    ACTIONS(34), 3,
      sym__newline,
      sym_text,
      aux_sym__median_token1,
  [231] = 1,
    ACTIONS(59), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [237] = 3,
    ACTIONS(61), 1,
      sym__newline,
    ACTIONS(63), 1,
      sym_text,
    STATE(18), 1,
      aux_sym__input_line,
  [247] = 1,
    ACTIONS(66), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [253] = 1,
    ACTIONS(68), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_identifier,
  [259] = 3,
    ACTIONS(70), 1,
      sym__newline,
    ACTIONS(72), 1,
      sym_text,
    STATE(18), 1,
      aux_sym__input_line,
  [269] = 1,
    ACTIONS(66), 2,
      sym__newline,
      anon_sym_LPAREN,
  [274] = 1,
    ACTIONS(59), 2,
      sym__newline,
      anon_sym_LPAREN,
  [279] = 1,
    ACTIONS(74), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [284] = 2,
    ACTIONS(76), 1,
      aux_sym__header_delim_token1,
    STATE(29), 1,
      sym__header_delim,
  [291] = 1,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      aux_sym__header_delim_token1,
  [296] = 2,
    ACTIONS(80), 1,
      aux_sym__median_token1,
    STATE(15), 1,
      sym__median,
  [303] = 1,
    ACTIONS(82), 1,
      anon_sym_COLON,
  [307] = 1,
    ACTIONS(84), 1,
      sym__newline,
  [311] = 1,
    ACTIONS(86), 1,
      sym_text,
  [315] = 1,
    ACTIONS(88), 1,
      sym__newline,
  [319] = 1,
    ACTIONS(90), 1,
      sym__newline,
  [323] = 1,
    ACTIONS(92), 1,
      sym__newline,
  [327] = 1,
    ACTIONS(94), 1,
      sym_identifier,
  [331] = 1,
    ACTIONS(96), 1,
      sym__newline,
  [335] = 1,
    ACTIONS(86), 1,
      sym__newline,
  [339] = 1,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
  [343] = 1,
    ACTIONS(100), 1,
      sym__newline,
  [347] = 1,
    ACTIONS(102), 1,
      sym__newline,
  [351] = 1,
    ACTIONS(104), 1,
      sym_text,
  [355] = 1,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
  [359] = 1,
    ACTIONS(108), 1,
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
  [SMALL_STATE(9)] = 127,
  [SMALL_STATE(10)] = 144,
  [SMALL_STATE(11)] = 160,
  [SMALL_STATE(12)] = 176,
  [SMALL_STATE(13)] = 192,
  [SMALL_STATE(14)] = 203,
  [SMALL_STATE(15)] = 214,
  [SMALL_STATE(16)] = 225,
  [SMALL_STATE(17)] = 231,
  [SMALL_STATE(18)] = 237,
  [SMALL_STATE(19)] = 247,
  [SMALL_STATE(20)] = 253,
  [SMALL_STATE(21)] = 259,
  [SMALL_STATE(22)] = 269,
  [SMALL_STATE(23)] = 274,
  [SMALL_STATE(24)] = 279,
  [SMALL_STATE(25)] = 284,
  [SMALL_STATE(26)] = 291,
  [SMALL_STATE(27)] = 296,
  [SMALL_STATE(28)] = 303,
  [SMALL_STATE(29)] = 307,
  [SMALL_STATE(30)] = 311,
  [SMALL_STATE(31)] = 315,
  [SMALL_STATE(32)] = 319,
  [SMALL_STATE(33)] = 323,
  [SMALL_STATE(34)] = 327,
  [SMALL_STATE(35)] = 331,
  [SMALL_STATE(36)] = 335,
  [SMALL_STATE(37)] = 339,
  [SMALL_STATE(38)] = 343,
  [SMALL_STATE(39)] = 347,
  [SMALL_STATE(40)] = 351,
  [SMALL_STATE(41)] = 355,
  [SMALL_STATE(42)] = 359,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(42),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(28),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_input_repeat1, 2),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_repeat1, 2), SHIFT_REPEAT(10),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_repeat1, 2), SHIFT_REPEAT(21),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_repeat1, 2), SHIFT_REPEAT(34),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_repeat1, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__input_line, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__input_line, 2), SHIFT_REPEAT(18),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3, .production_id = 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 2, .production_id = 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_name, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 6, .production_id = 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 4, .production_id = 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header_delim, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__median, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [106] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
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
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_corpus(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_text,
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
