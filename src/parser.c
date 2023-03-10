#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 7

enum {
  anon_sym_TILDE = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_EQ = 4,
  anon_sym_SEMI = 5,
  sym_comment = 6,
  sym_identifier = 7,
  aux_sym_literal_token1 = 8,
  anon_sym_DQUOTE = 9,
  anon_sym_SQUOTE = 10,
  sym_unescaped_double_string_fragment = 11,
  sym_unescaped_single_string_fragment = 12,
  sym_escape_sequence = 13,
  sym_source_file = 14,
  sym__definition = 15,
  sym_block_definition = 16,
  sym_statement = 17,
  sym_call_stmt = 18,
  sym_literal = 19,
  sym_string = 20,
  aux_sym_source_file_repeat1 = 21,
  aux_sym_block_definition_repeat1 = 22,
  aux_sym_call_stmt_repeat1 = 23,
  aux_sym_string_repeat1 = 24,
  aux_sym_string_repeat2 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_TILDE] = "~",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [sym_comment] = "comment",
  [sym_identifier] = "identifier",
  [aux_sym_literal_token1] = "literal_token1",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [sym_unescaped_double_string_fragment] = "string_fragment",
  [sym_unescaped_single_string_fragment] = "string_fragment",
  [sym_escape_sequence] = "escape_sequence",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_block_definition] = "block_definition",
  [sym_statement] = "statement",
  [sym_call_stmt] = "call_stmt",
  [sym_literal] = "literal",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_definition_repeat1] = "block_definition_repeat1",
  [aux_sym_call_stmt_repeat1] = "call_stmt_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_comment] = sym_comment,
  [sym_identifier] = sym_identifier,
  [aux_sym_literal_token1] = aux_sym_literal_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_unescaped_double_string_fragment] = sym_unescaped_double_string_fragment,
  [sym_unescaped_single_string_fragment] = sym_unescaped_double_string_fragment,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_block_definition] = sym_block_definition,
  [sym_statement] = sym_statement,
  [sym_call_stmt] = sym_call_stmt,
  [sym_literal] = sym_literal,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_definition_repeat1] = aux_sym_block_definition_repeat1,
  [aux_sym_call_stmt_repeat1] = aux_sym_call_stmt_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_unescaped_double_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_unescaped_single_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_block_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_call_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_stmt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_args = 1,
  field_consequence = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_consequence] = "consequence",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_consequence, 2},
  [1] =
    {field_args, 1},
  [2] =
    {field_consequence, 3},
  [3] =
    {field_args, 2},
  [4] =
    {field_args, 1},
    {field_consequence, 3},
  [6] =
    {field_args, 2},
    {field_consequence, 4},
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
  [37] = 37,
  [38] = 38,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 160
    ? (c < '['
      ? (c < 0
        ? c == 0
        : (c <= '!' || (c >= '%' && c <= '@')))
      : (c <= '^' || (c < '|'
        ? c == '`'
        : c <= '|')))
    : (c <= 160 || (c < 8287
      ? (c < 8192
        ? c == 5760
        : (c <= 8203 || c == 8239))
      : (c <= 8288 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 160
    ? (c < '['
      ? (c < 0
        ? c == 0
        : (c <= '"' || (c >= '%' && c <= '@')))
      : (c <= '^' || (c < '{'
        ? c == '`'
        : c <= '~')))
    : (c <= 160 || (c < 8287
      ? (c < 8192
        ? c == 5760
        : (c <= 8203 || c == 8239))
      : (c <= 8288 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 160
    ? (c < ':'
      ? (c < 0
        ? c == 0
        : (c <= '#' || (c >= '%' && c <= '/')))
      : (c <= '@' || (c < '`'
        ? (c >= '[' && c <= '^')
        : (c <= '`' || (c >= '{' && c <= '~')))))
    : (c <= 160 || (c < 8287
      ? (c < 8192
        ? c == 5760
        : (c <= 8203 || c == 8239))
      : (c <= 8288 || (c < 65279
        ? c == 12288
        : c <= 65279)))));
}

static inline bool aux_sym_literal_token1_character_set_1(int32_t c) {
  return (c < '"'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == ' '))
    : (c <= '"' || (c < '{'
      ? (c < ';'
        ? c == '\''
        : c <= ';')
      : (c <= '{' || c == '}'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '#') ADVANCE(35);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == ';') ADVANCE(34);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '}') ADVANCE(32);
      if (lookahead == '~') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(36);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == ';') ADVANCE(34);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(37);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '~') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '}') ADVANCE(37);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 5:
      if (lookahead == 'u') ADVANCE(8);
      if (lookahead == 'x') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(47);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'u') ADVANCE(10);
      if (lookahead == 'x') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(47);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 8:
      if (lookahead == '{') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 9:
      if (lookahead == '{') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 10:
      if (lookahead == '{') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == '}') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '}') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '}') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 26:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '#') ADVANCE(35);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == ';') ADVANCE(34);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '}') ADVANCE(32);
      if (lookahead == '~') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(36);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      if (lookahead == '#') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '}') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(36);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (!aux_sym_literal_token1_character_set_1(lookahead)) ADVANCE(37);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(6);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (!aux_sym_literal_token1_character_set_1(lookahead)) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\\') ADVANCE(6);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(36);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(44);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(46);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 27},
  [2] = {.lex_state = 27},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 27},
  [5] = {.lex_state = 27},
  [6] = {.lex_state = 27},
  [7] = {.lex_state = 27},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 27},
  [10] = {.lex_state = 27},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 27},
  [13] = {.lex_state = 27},
  [14] = {.lex_state = 27},
  [15] = {.lex_state = 27},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 27},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 27},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 27},
  [27] = {.lex_state = 27},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 27},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 27},
  [33] = {.lex_state = 27},
  [34] = {.lex_state = 27},
  [35] = {.lex_state = 27},
  [36] = {.lex_state = 27},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(37),
    [sym__definition] = STATE(2),
    [sym_block_definition] = STATE(2),
    [sym_statement] = STATE(2),
    [sym_call_stmt] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym_comment,
    STATE(34), 1,
      sym_call_stmt,
    STATE(4), 4,
      sym__definition,
      sym_block_definition,
      sym_statement,
      aux_sym_source_file_repeat1,
  [19] = 8,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      aux_sym_literal_token1,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    STATE(8), 1,
      aux_sym_call_stmt_repeat1,
    STATE(17), 1,
      sym_string,
    STATE(19), 1,
      sym_literal,
  [44] = 5,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(28), 1,
      sym_identifier,
    STATE(34), 1,
      sym_call_stmt,
    STATE(4), 4,
      sym__definition,
      sym_block_definition,
      sym_statement,
      aux_sym_source_file_repeat1,
  [63] = 5,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(36), 1,
      sym_identifier,
    STATE(34), 1,
      sym_call_stmt,
    STATE(5), 3,
      sym_block_definition,
      sym_statement,
      aux_sym_block_definition_repeat1,
  [81] = 5,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 1,
      sym_comment,
    STATE(34), 1,
      sym_call_stmt,
    STATE(13), 3,
      sym_block_definition,
      sym_statement,
      aux_sym_block_definition_repeat1,
  [99] = 5,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(45), 1,
      sym_comment,
    STATE(34), 1,
      sym_call_stmt,
    STATE(5), 3,
      sym_block_definition,
      sym_statement,
      aux_sym_block_definition_repeat1,
  [117] = 6,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_SEMI,
    ACTIONS(49), 1,
      aux_sym_literal_token1,
    STATE(17), 1,
      sym_string,
    STATE(11), 2,
      sym_literal,
      aux_sym_call_stmt_repeat1,
  [137] = 5,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      sym_call_stmt,
    STATE(5), 3,
      sym_block_definition,
      sym_statement,
      aux_sym_block_definition_repeat1,
  [155] = 5,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 1,
      sym_comment,
    STATE(34), 1,
      sym_call_stmt,
    STATE(14), 3,
      sym_block_definition,
      sym_statement,
      aux_sym_block_definition_repeat1,
  [173] = 6,
    ACTIONS(57), 1,
      anon_sym_SEMI,
    ACTIONS(59), 1,
      aux_sym_literal_token1,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      anon_sym_SQUOTE,
    STATE(17), 1,
      sym_string,
    STATE(11), 2,
      sym_literal,
      aux_sym_call_stmt_repeat1,
  [193] = 5,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    ACTIONS(70), 1,
      sym_comment,
    STATE(34), 1,
      sym_call_stmt,
    STATE(7), 3,
      sym_block_definition,
      sym_statement,
      aux_sym_block_definition_repeat1,
  [211] = 5,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      sym_call_stmt,
    STATE(5), 3,
      sym_block_definition,
      sym_statement,
      aux_sym_block_definition_repeat1,
  [229] = 5,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      sym_call_stmt,
    STATE(5), 3,
      sym_block_definition,
      sym_statement,
      aux_sym_block_definition_repeat1,
  [247] = 5,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    ACTIONS(78), 1,
      sym_comment,
    STATE(34), 1,
      sym_call_stmt,
    STATE(9), 3,
      sym_block_definition,
      sym_statement,
      aux_sym_block_definition_repeat1,
  [265] = 6,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_literal_token1,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym_string,
    STATE(38), 1,
      sym_literal,
  [284] = 1,
    ACTIONS(82), 5,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      aux_sym_literal_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [292] = 1,
    ACTIONS(84), 5,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      aux_sym_literal_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [300] = 2,
    ACTIONS(86), 1,
      anon_sym_LBRACE,
    ACTIONS(88), 4,
      anon_sym_SEMI,
      aux_sym_literal_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [310] = 1,
    ACTIONS(90), 5,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      aux_sym_literal_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [318] = 3,
    ACTIONS(92), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      aux_sym_string_repeat1,
    ACTIONS(94), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [329] = 1,
    ACTIONS(96), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
      sym_identifier,
  [336] = 3,
    ACTIONS(98), 1,
      anon_sym_SQUOTE,
    STATE(29), 1,
      aux_sym_string_repeat2,
    ACTIONS(100), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [347] = 1,
    ACTIONS(102), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
      sym_identifier,
  [354] = 3,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      aux_sym_string_repeat1,
    ACTIONS(104), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [365] = 1,
    ACTIONS(106), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
      sym_identifier,
  [372] = 1,
    ACTIONS(108), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
      sym_identifier,
  [379] = 3,
    ACTIONS(110), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      aux_sym_string_repeat1,
    ACTIONS(112), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [390] = 3,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    STATE(29), 1,
      aux_sym_string_repeat2,
    ACTIONS(117), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [401] = 1,
    ACTIONS(120), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
      sym_identifier,
  [408] = 3,
    ACTIONS(92), 1,
      anon_sym_SQUOTE,
    STATE(23), 1,
      aux_sym_string_repeat2,
    ACTIONS(122), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [419] = 1,
    ACTIONS(124), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
      sym_identifier,
  [426] = 1,
    ACTIONS(126), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
      sym_identifier,
  [433] = 1,
    ACTIONS(128), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
      sym_identifier,
  [440] = 1,
    ACTIONS(130), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
      sym_identifier,
  [447] = 1,
    ACTIONS(132), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_comment,
      sym_identifier,
  [454] = 1,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
  [458] = 1,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 63,
  [SMALL_STATE(6)] = 81,
  [SMALL_STATE(7)] = 99,
  [SMALL_STATE(8)] = 117,
  [SMALL_STATE(9)] = 137,
  [SMALL_STATE(10)] = 155,
  [SMALL_STATE(11)] = 173,
  [SMALL_STATE(12)] = 193,
  [SMALL_STATE(13)] = 211,
  [SMALL_STATE(14)] = 229,
  [SMALL_STATE(15)] = 247,
  [SMALL_STATE(16)] = 265,
  [SMALL_STATE(17)] = 284,
  [SMALL_STATE(18)] = 292,
  [SMALL_STATE(19)] = 300,
  [SMALL_STATE(20)] = 310,
  [SMALL_STATE(21)] = 318,
  [SMALL_STATE(22)] = 329,
  [SMALL_STATE(23)] = 336,
  [SMALL_STATE(24)] = 347,
  [SMALL_STATE(25)] = 354,
  [SMALL_STATE(26)] = 365,
  [SMALL_STATE(27)] = 372,
  [SMALL_STATE(28)] = 379,
  [SMALL_STATE(29)] = 390,
  [SMALL_STATE(30)] = 401,
  [SMALL_STATE(31)] = 408,
  [SMALL_STATE(32)] = 419,
  [SMALL_STATE(33)] = 426,
  [SMALL_STATE(34)] = 433,
  [SMALL_STATE(35)] = 440,
  [SMALL_STATE(36)] = 447,
  [SMALL_STATE(37)] = 454,
  [SMALL_STATE(38)] = 458,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_definition_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_definition_repeat1, 2), SHIFT_REPEAT(5),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_definition_repeat1, 2), SHIFT_REPEAT(3),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_stmt_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_stmt_repeat1, 2), SHIFT_REPEAT(17),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_stmt_repeat1, 2), SHIFT_REPEAT(21),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_stmt_repeat1, 2), SHIFT_REPEAT(31),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_stmt_repeat1, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_stmt, 3),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_definition, 4),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_definition, 4, .production_id = 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_definition, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(28),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(29),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_definition, 4, .production_id = 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_definition, 5, .production_id = 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_definition, 5, .production_id = 4),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_definition, 5, .production_id = 5),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_definition, 6, .production_id = 6),
  [134] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_nginx(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
