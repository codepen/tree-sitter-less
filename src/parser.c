#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 282
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 107
#define ALIAS_COUNT 9
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 17

enum {
  anon_sym_ATimport = 1,
  anon_sym_COMMA = 2,
  anon_sym_SEMI = 3,
  anon_sym_ATmedia = 4,
  anon_sym_ATcharset = 5,
  anon_sym_ATnamespace = 6,
  anon_sym_ATkeyframes = 7,
  aux_sym_keyframes_statement_token1 = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  sym_from = 11,
  sym_to = 12,
  anon_sym_ATsupports = 13,
  anon_sym_LPAREN_RPAREN = 14,
  aux_sym_merge_attribute_token1 = 15,
  sym_nesting_selector = 16,
  anon_sym_STAR = 17,
  anon_sym_DOT = 18,
  anon_sym_COLON = 19,
  anon_sym_COLON_COLON = 20,
  anon_sym_POUND = 21,
  anon_sym_LBRACK = 22,
  anon_sym_EQ = 23,
  anon_sym_TILDE_EQ = 24,
  anon_sym_CARET_EQ = 25,
  anon_sym_PIPE_EQ = 26,
  anon_sym_STAR_EQ = 27,
  anon_sym_DOLLAR_EQ = 28,
  anon_sym_RBRACK = 29,
  anon_sym_GT = 30,
  anon_sym_TILDE = 31,
  anon_sym_PLUS = 32,
  anon_sym_LPAREN = 33,
  anon_sym_RPAREN = 34,
  sym_important = 35,
  anon_sym_LPAREN2 = 36,
  anon_sym_and = 37,
  anon_sym_or = 38,
  anon_sym_not = 39,
  anon_sym_only = 40,
  anon_sym_selector = 41,
  aux_sym_color_value_token1 = 42,
  sym_string_value = 43,
  aux_sym_integer_value_token1 = 44,
  aux_sym_float_value_token1 = 45,
  sym_unit = 46,
  anon_sym_DASH = 47,
  anon_sym_SLASH = 48,
  sym_identifier = 49,
  sym_at_keyword = 50,
  sym_comment = 51,
  sym_single_line_comment = 52,
  sym_plain_value = 53,
  sym__descendant_operator = 54,
  sym_stylesheet = 55,
  sym_import_statement = 56,
  sym_media_statement = 57,
  sym_charset_statement = 58,
  sym_namespace_statement = 59,
  sym_keyframes_statement = 60,
  sym_keyframe_block_list = 61,
  sym_keyframe_block = 62,
  sym_supports_statement = 63,
  sym_at_rule = 64,
  sym_rule_set = 65,
  sym_selectors = 66,
  sym_block = 67,
  sym_merge_selector = 68,
  sym_merge_attribute = 69,
  sym__selector = 70,
  sym_universal_selector = 71,
  sym_class_selector = 72,
  sym_pseudo_class_selector = 73,
  sym_pseudo_element_selector = 74,
  sym_id_selector = 75,
  sym_attribute_selector = 76,
  sym_child_selector = 77,
  sym_descendant_selector = 78,
  sym_sibling_selector = 79,
  sym_adjacent_sibling_selector = 80,
  sym_pseudo_class_arguments = 81,
  sym_declaration = 82,
  sym_last_declaration = 83,
  sym__query = 84,
  sym_feature_query = 85,
  sym_parenthesized_query = 86,
  sym_binary_query = 87,
  sym_unary_query = 88,
  sym_selector_query = 89,
  sym__value = 90,
  sym_parenthesized_value = 91,
  sym_color_value = 92,
  sym_integer_value = 93,
  sym_float_value = 94,
  sym_call_expression = 95,
  sym_binary_expression = 96,
  sym_arguments = 97,
  aux_sym_stylesheet_repeat1 = 98,
  aux_sym_import_statement_repeat1 = 99,
  aux_sym_keyframe_block_list_repeat1 = 100,
  aux_sym_selectors_repeat1 = 101,
  aux_sym_block_repeat1 = 102,
  aux_sym_pseudo_class_arguments_repeat1 = 103,
  aux_sym_pseudo_class_arguments_repeat2 = 104,
  aux_sym_declaration_repeat1 = 105,
  aux_sym_arguments_repeat1 = 106,
  alias_sym_attribute_name = 107,
  alias_sym_class_name = 108,
  alias_sym_feature_name = 109,
  alias_sym_function_name = 110,
  alias_sym_id_name = 111,
  alias_sym_keyframes_name = 112,
  alias_sym_keyword_query = 113,
  alias_sym_namespace_name = 114,
  alias_sym_tag_name = 115,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATimport] = "@import",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_ATmedia] = "@media",
  [anon_sym_ATcharset] = "@charset",
  [anon_sym_ATnamespace] = "@namespace",
  [anon_sym_ATkeyframes] = "@keyframes",
  [aux_sym_keyframes_statement_token1] = "at_keyword",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_from] = "from",
  [sym_to] = "to",
  [anon_sym_ATsupports] = "@supports",
  [anon_sym_LPAREN_RPAREN] = "()",
  [aux_sym_merge_attribute_token1] = "merge_attribute_token1",
  [sym_nesting_selector] = "nesting_selector",
  [anon_sym_STAR] = "*",
  [anon_sym_DOT] = ".",
  [anon_sym_COLON] = ":",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_POUND] = "#",
  [anon_sym_LBRACK] = "[",
  [anon_sym_EQ] = "=",
  [anon_sym_TILDE_EQ] = "~=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_DOLLAR_EQ] = "$=",
  [anon_sym_RBRACK] = "]",
  [anon_sym_GT] = ">",
  [anon_sym_TILDE] = "~",
  [anon_sym_PLUS] = "+",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_important] = "important",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_not] = "not",
  [anon_sym_only] = "only",
  [anon_sym_selector] = "selector",
  [aux_sym_color_value_token1] = "color_value_token1",
  [sym_string_value] = "string_value",
  [aux_sym_integer_value_token1] = "integer_value_token1",
  [aux_sym_float_value_token1] = "float_value_token1",
  [sym_unit] = "unit",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [sym_identifier] = "identifier",
  [sym_at_keyword] = "at_keyword",
  [sym_comment] = "comment",
  [sym_single_line_comment] = "single_line_comment",
  [sym_plain_value] = "plain_value",
  [sym__descendant_operator] = "_descendant_operator",
  [sym_stylesheet] = "stylesheet",
  [sym_import_statement] = "import_statement",
  [sym_media_statement] = "media_statement",
  [sym_charset_statement] = "charset_statement",
  [sym_namespace_statement] = "namespace_statement",
  [sym_keyframes_statement] = "keyframes_statement",
  [sym_keyframe_block_list] = "keyframe_block_list",
  [sym_keyframe_block] = "keyframe_block",
  [sym_supports_statement] = "supports_statement",
  [sym_at_rule] = "at_rule",
  [sym_rule_set] = "rule_set",
  [sym_selectors] = "selectors",
  [sym_block] = "block",
  [sym_merge_selector] = "merge_selector",
  [sym_merge_attribute] = "property_name",
  [sym__selector] = "_selector",
  [sym_universal_selector] = "universal_selector",
  [sym_class_selector] = "class_selector",
  [sym_pseudo_class_selector] = "pseudo_class_selector",
  [sym_pseudo_element_selector] = "pseudo_element_selector",
  [sym_id_selector] = "id_selector",
  [sym_attribute_selector] = "attribute_selector",
  [sym_child_selector] = "child_selector",
  [sym_descendant_selector] = "descendant_selector",
  [sym_sibling_selector] = "sibling_selector",
  [sym_adjacent_sibling_selector] = "adjacent_sibling_selector",
  [sym_pseudo_class_arguments] = "arguments",
  [sym_declaration] = "declaration",
  [sym_last_declaration] = "declaration",
  [sym__query] = "_query",
  [sym_feature_query] = "feature_query",
  [sym_parenthesized_query] = "parenthesized_query",
  [sym_binary_query] = "binary_query",
  [sym_unary_query] = "unary_query",
  [sym_selector_query] = "selector_query",
  [sym__value] = "_value",
  [sym_parenthesized_value] = "parenthesized_value",
  [sym_color_value] = "color_value",
  [sym_integer_value] = "integer_value",
  [sym_float_value] = "float_value",
  [sym_call_expression] = "call_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_arguments] = "arguments",
  [aux_sym_stylesheet_repeat1] = "stylesheet_repeat1",
  [aux_sym_import_statement_repeat1] = "import_statement_repeat1",
  [aux_sym_keyframe_block_list_repeat1] = "keyframe_block_list_repeat1",
  [aux_sym_selectors_repeat1] = "selectors_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_pseudo_class_arguments_repeat1] = "pseudo_class_arguments_repeat1",
  [aux_sym_pseudo_class_arguments_repeat2] = "pseudo_class_arguments_repeat2",
  [aux_sym_declaration_repeat1] = "declaration_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [alias_sym_attribute_name] = "attribute_name",
  [alias_sym_class_name] = "class_name",
  [alias_sym_feature_name] = "feature_name",
  [alias_sym_function_name] = "function_name",
  [alias_sym_id_name] = "id_name",
  [alias_sym_keyframes_name] = "keyframes_name",
  [alias_sym_keyword_query] = "keyword_query",
  [alias_sym_namespace_name] = "namespace_name",
  [alias_sym_tag_name] = "tag_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATimport] = anon_sym_ATimport,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_ATmedia] = anon_sym_ATmedia,
  [anon_sym_ATcharset] = anon_sym_ATcharset,
  [anon_sym_ATnamespace] = anon_sym_ATnamespace,
  [anon_sym_ATkeyframes] = anon_sym_ATkeyframes,
  [aux_sym_keyframes_statement_token1] = sym_at_keyword,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_from] = sym_from,
  [sym_to] = sym_to,
  [anon_sym_ATsupports] = anon_sym_ATsupports,
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
  [aux_sym_merge_attribute_token1] = aux_sym_merge_attribute_token1,
  [sym_nesting_selector] = sym_nesting_selector,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_TILDE_EQ] = anon_sym_TILDE_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_DOLLAR_EQ] = anon_sym_DOLLAR_EQ,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_important] = sym_important,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_only] = anon_sym_only,
  [anon_sym_selector] = anon_sym_selector,
  [aux_sym_color_value_token1] = aux_sym_color_value_token1,
  [sym_string_value] = sym_string_value,
  [aux_sym_integer_value_token1] = aux_sym_integer_value_token1,
  [aux_sym_float_value_token1] = aux_sym_float_value_token1,
  [sym_unit] = sym_unit,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_identifier] = sym_identifier,
  [sym_at_keyword] = sym_at_keyword,
  [sym_comment] = sym_comment,
  [sym_single_line_comment] = sym_single_line_comment,
  [sym_plain_value] = sym_plain_value,
  [sym__descendant_operator] = sym__descendant_operator,
  [sym_stylesheet] = sym_stylesheet,
  [sym_import_statement] = sym_import_statement,
  [sym_media_statement] = sym_media_statement,
  [sym_charset_statement] = sym_charset_statement,
  [sym_namespace_statement] = sym_namespace_statement,
  [sym_keyframes_statement] = sym_keyframes_statement,
  [sym_keyframe_block_list] = sym_keyframe_block_list,
  [sym_keyframe_block] = sym_keyframe_block,
  [sym_supports_statement] = sym_supports_statement,
  [sym_at_rule] = sym_at_rule,
  [sym_rule_set] = sym_rule_set,
  [sym_selectors] = sym_selectors,
  [sym_block] = sym_block,
  [sym_merge_selector] = sym_merge_selector,
  [sym_merge_attribute] = sym_merge_attribute,
  [sym__selector] = sym__selector,
  [sym_universal_selector] = sym_universal_selector,
  [sym_class_selector] = sym_class_selector,
  [sym_pseudo_class_selector] = sym_pseudo_class_selector,
  [sym_pseudo_element_selector] = sym_pseudo_element_selector,
  [sym_id_selector] = sym_id_selector,
  [sym_attribute_selector] = sym_attribute_selector,
  [sym_child_selector] = sym_child_selector,
  [sym_descendant_selector] = sym_descendant_selector,
  [sym_sibling_selector] = sym_sibling_selector,
  [sym_adjacent_sibling_selector] = sym_adjacent_sibling_selector,
  [sym_pseudo_class_arguments] = sym_arguments,
  [sym_declaration] = sym_declaration,
  [sym_last_declaration] = sym_declaration,
  [sym__query] = sym__query,
  [sym_feature_query] = sym_feature_query,
  [sym_parenthesized_query] = sym_parenthesized_query,
  [sym_binary_query] = sym_binary_query,
  [sym_unary_query] = sym_unary_query,
  [sym_selector_query] = sym_selector_query,
  [sym__value] = sym__value,
  [sym_parenthesized_value] = sym_parenthesized_value,
  [sym_color_value] = sym_color_value,
  [sym_integer_value] = sym_integer_value,
  [sym_float_value] = sym_float_value,
  [sym_call_expression] = sym_call_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_arguments] = sym_arguments,
  [aux_sym_stylesheet_repeat1] = aux_sym_stylesheet_repeat1,
  [aux_sym_import_statement_repeat1] = aux_sym_import_statement_repeat1,
  [aux_sym_keyframe_block_list_repeat1] = aux_sym_keyframe_block_list_repeat1,
  [aux_sym_selectors_repeat1] = aux_sym_selectors_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_pseudo_class_arguments_repeat1] = aux_sym_pseudo_class_arguments_repeat1,
  [aux_sym_pseudo_class_arguments_repeat2] = aux_sym_pseudo_class_arguments_repeat2,
  [aux_sym_declaration_repeat1] = aux_sym_declaration_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [alias_sym_attribute_name] = alias_sym_attribute_name,
  [alias_sym_class_name] = alias_sym_class_name,
  [alias_sym_feature_name] = alias_sym_feature_name,
  [alias_sym_function_name] = alias_sym_function_name,
  [alias_sym_id_name] = alias_sym_id_name,
  [alias_sym_keyframes_name] = alias_sym_keyframes_name,
  [alias_sym_keyword_query] = alias_sym_keyword_query,
  [alias_sym_namespace_name] = alias_sym_namespace_name,
  [alias_sym_tag_name] = alias_sym_tag_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ATimport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATmedia] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATcharset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATnamespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATkeyframes] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_keyframes_statement_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_from] = {
    .visible = true,
    .named = true,
  },
  [sym_to] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATsupports] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_merge_attribute_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_nesting_selector] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
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
  [sym_important] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_only] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_selector] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_color_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_string_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_integer_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_at_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_single_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_plain_value] = {
    .visible = true,
    .named = true,
  },
  [sym__descendant_operator] = {
    .visible = false,
    .named = true,
  },
  [sym_stylesheet] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_media_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_charset_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframes_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframe_block_list] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframe_block] = {
    .visible = true,
    .named = true,
  },
  [sym_supports_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_at_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_set] = {
    .visible = true,
    .named = true,
  },
  [sym_selectors] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_merge_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_merge_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__selector] = {
    .visible = false,
    .named = true,
  },
  [sym_universal_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_class_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_element_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_id_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_child_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_descendant_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_sibling_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_adjacent_sibling_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_last_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__query] = {
    .visible = false,
    .named = true,
  },
  [sym_feature_query] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_query] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_query] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_query] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_query] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized_value] = {
    .visible = true,
    .named = true,
  },
  [sym_color_value] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_value] = {
    .visible = true,
    .named = true,
  },
  [sym_float_value] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_stylesheet_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyframe_block_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_selectors_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_class_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_class_arguments_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_feature_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_id_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyframes_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyword_query] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_namespace_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_tag_name] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_tag_name,
  },
  [2] = {
    [0] = sym_plain_value,
  },
  [3] = {
    [0] = alias_sym_keyword_query,
  },
  [4] = {
    [1] = alias_sym_class_name,
  },
  [5] = {
    [1] = alias_sym_tag_name,
  },
  [6] = {
    [1] = alias_sym_id_name,
  },
  [7] = {
    [0] = alias_sym_function_name,
  },
  [8] = {
    [1] = alias_sym_keyframes_name,
  },
  [9] = {
    [1] = alias_sym_attribute_name,
  },
  [10] = {
    [2] = alias_sym_class_name,
  },
  [11] = {
    [2] = alias_sym_tag_name,
  },
  [12] = {
    [2] = alias_sym_id_name,
  },
  [13] = {
    [1] = alias_sym_namespace_name,
  },
  [14] = {
    [0] = sym_merge_attribute,
  },
  [15] = {
    [2] = alias_sym_attribute_name,
  },
  [16] = {
    [1] = alias_sym_feature_name,
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
  [4] = 2,
  [5] = 3,
  [6] = 3,
  [7] = 2,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 15,
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
  [27] = 24,
  [28] = 24,
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
  [40] = 32,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 30,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 41,
  [54] = 33,
  [55] = 44,
  [56] = 34,
  [57] = 35,
  [58] = 58,
  [59] = 37,
  [60] = 60,
  [61] = 31,
  [62] = 36,
  [63] = 39,
  [64] = 42,
  [65] = 43,
  [66] = 51,
  [67] = 52,
  [68] = 68,
  [69] = 69,
  [70] = 60,
  [71] = 58,
  [72] = 68,
  [73] = 48,
  [74] = 69,
  [75] = 29,
  [76] = 76,
  [77] = 49,
  [78] = 50,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 88,
  [95] = 84,
  [96] = 84,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 104,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 107,
  [110] = 106,
  [111] = 108,
  [112] = 112,
  [113] = 113,
  [114] = 106,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 113,
  [119] = 116,
  [120] = 108,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 140,
  [148] = 148,
  [149] = 149,
  [150] = 45,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 86,
  [155] = 155,
  [156] = 152,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 79,
  [161] = 81,
  [162] = 159,
  [163] = 163,
  [164] = 85,
  [165] = 93,
  [166] = 92,
  [167] = 82,
  [168] = 87,
  [169] = 91,
  [170] = 90,
  [171] = 89,
  [172] = 45,
  [173] = 79,
  [174] = 81,
  [175] = 175,
  [176] = 89,
  [177] = 177,
  [178] = 178,
  [179] = 175,
  [180] = 91,
  [181] = 90,
  [182] = 93,
  [183] = 183,
  [184] = 184,
  [185] = 85,
  [186] = 86,
  [187] = 87,
  [188] = 82,
  [189] = 184,
  [190] = 190,
  [191] = 190,
  [192] = 92,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 193,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 202,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 206,
  [210] = 210,
  [211] = 206,
  [212] = 210,
  [213] = 203,
  [214] = 201,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 216,
  [219] = 49,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 39,
  [224] = 224,
  [225] = 215,
  [226] = 215,
  [227] = 33,
  [228] = 221,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 229,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 231,
  [237] = 237,
  [238] = 238,
  [239] = 79,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 240,
  [246] = 246,
  [247] = 244,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 250,
  [252] = 249,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 258,
  [267] = 248,
  [268] = 258,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 253,
  [273] = 261,
  [274] = 254,
  [275] = 249,
  [276] = 276,
  [277] = 277,
  [278] = 261,
  [279] = 260,
  [280] = 280,
  [281] = 257,
};

static inline bool sym_single_line_comment_character_set_1(int32_t c) {
  return (c < ';'
    ? (c < ' '
      ? (c < '\r'
        ? c == '\t'
        : c <= '\r')
      : (c <= '!' || (c < ','
        ? (c >= '(' && c <= ')')
        : c <= ',')))
    : (c <= ';' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_single_line_comment_character_set_2(int32_t c) {
  return (c < ';'
    ? (c < ' '
      ? (c < '\r'
        ? c == '\t'
        : c <= '\r')
      : (c <= '!' || (c < ','
        ? (c >= '(' && c <= '*')
        : c <= ',')))
    : (c <= ';' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_plain_value_character_set_1(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? (c >= ' ' && c <= '!')
        : c <= '*')))
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == ';'
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_plain_value_character_set_2(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? (c >= ' ' && c <= '!')
        : c <= ')')))
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == ';'
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(80);
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '$') ADVANCE(32);
      if (lookahead == '&') ADVANCE(96);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(120);
      if (lookahead == ')') ADVANCE(121);
      if (lookahead == '*') ADVANCE(98);
      if (lookahead == '+') ADVANCE(116);
      if (lookahead == ',') ADVANCE(82);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == '=') ADVANCE(105);
      if (lookahead == '>') ADVANCE(112);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == ']') ADVANCE(111);
      if (lookahead == '^') ADVANCE(34);
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(50);
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead == '{') ADVANCE(89);
      if (lookahead == '|') ADVANCE(35);
      if (lookahead == '}') ADVANCE(90);
      if (lookahead == '~') ADVANCE(114);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(77)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'd')) ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '%') ADVANCE(193);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(123);
      if (lookahead == ')') ADVANCE(121);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == ',') ADVANCE(82);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == '}') ADVANCE(90);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '&') ADVANCE(96);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(124);
      if (lookahead == ')') ADVANCE(121);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == ',') ADVANCE(82);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == '>') ADVANCE(112);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == '}') ADVANCE(90);
      if (lookahead == '~') ADVANCE(113);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == ')') ADVANCE(121);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == ',') ADVANCE(82);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == '}') ADVANCE(90);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(123);
      if (lookahead == ')') ADVANCE(121);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == ',') ADVANCE(82);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == '}') ADVANCE(90);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(120);
      if (lookahead == ')') ADVANCE(121);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == ',') ADVANCE(82);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == '>') ADVANCE(112);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == '~') ADVANCE(113);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(124);
      if (lookahead == ')') ADVANCE(121);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == ',') ADVANCE(82);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == '>') ADVANCE(112);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == '~') ADVANCE(113);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == '+') ADVANCE(118);
      if (lookahead == ',') ADVANCE(82);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == '>') ADVANCE(112);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == '{') ADVANCE(89);
      if (lookahead == '~') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == '+') ADVANCE(118);
      if (lookahead == ',') ADVANCE(82);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == '>') ADVANCE(112);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == '{') ADVANCE(89);
      if (lookahead == '~') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 12:
      if (lookahead == '$') ADVANCE(32);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(69);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '=') ADVANCE(105);
      if (lookahead == ']') ADVANCE(111);
      if (lookahead == '^') ADVANCE(34);
      if (lookahead == 'f') ADVANCE(59);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead == '|') ADVANCE(35);
      if (lookahead == '}') ADVANCE(90);
      if (lookahead == '~') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 13:
      if (lookahead == '%') ADVANCE(193);
      if (lookahead == '(') ADVANCE(123);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '+') ADVANCE(115);
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == '_') ADVANCE(218);
      if (lookahead == 'n') ADVANCE(183);
      if (lookahead == 'o') ADVANCE(182);
      if (lookahead == 's') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == ')') ADVANCE(121);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '+') ADVANCE(115);
      if (lookahead == '-') ADVANCE(194);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == ']') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 16:
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '+') ADVANCE(115);
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(210);
      if (lookahead == 'o') ADVANCE(209);
      if (lookahead == 's') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 17:
      if (lookahead == '(') ADVANCE(123);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '+') ADVANCE(115);
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(210);
      if (lookahead == 'o') ADVANCE(209);
      if (lookahead == 's') ADVANCE(206);
      if (lookahead == '{') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 18:
      if (lookahead == '(') ADVANCE(123);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '+') ADVANCE(115);
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(210);
      if (lookahead == 'o') ADVANCE(209);
      if (lookahead == 's') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 19:
      if (lookahead == ')') ADVANCE(121);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '+') ADVANCE(115);
      if (lookahead == '-') ADVANCE(194);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == ']') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      END_STATE();
    case 20:
      if (lookahead == ')') ADVANCE(94);
      END_STATE();
    case 21:
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '/') ADVANCE(272);
      END_STATE();
    case 22:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '/') ADVANCE(267);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      END_STATE();
    case 29:
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      END_STATE();
    case 30:
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 31:
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(110);
      END_STATE();
    case 33:
      if (lookahead == '=') ADVANCE(109);
      END_STATE();
    case 34:
      if (lookahead == '=') ADVANCE(107);
      END_STATE();
    case 35:
      if (lookahead == '=') ADVANCE(108);
      END_STATE();
    case 36:
      if (lookahead == '=') ADVANCE(106);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(237);
      if (lookahead == 'i') ADVANCE(239);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'm') ADVANCE(228);
      if (lookahead == 'n') ADVANCE(222);
      if (lookahead == 's') ADVANCE(262);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(125);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 46:
      if (lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(91);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 57:
      if (lookahead == 'p') ADVANCE(55);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 66:
      if (lookahead == 'y') ADVANCE(130);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 72:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 73:
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(31);
      END_STATE();
    case 74:
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(273);
      END_STATE();
    case 75:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(9);
      if (lookahead == '"') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(75);
      END_STATE();
    case 76:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(14);
      if (lookahead == '\'') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(76);
      END_STATE();
    case 77:
      if (eof) ADVANCE(80);
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '$') ADVANCE(32);
      if (lookahead == '&') ADVANCE(96);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(124);
      if (lookahead == ')') ADVANCE(121);
      if (lookahead == '*') ADVANCE(98);
      if (lookahead == '+') ADVANCE(116);
      if (lookahead == ',') ADVANCE(82);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == '=') ADVANCE(105);
      if (lookahead == '>') ADVANCE(112);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == ']') ADVANCE(111);
      if (lookahead == '^') ADVANCE(34);
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'f') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(50);
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead == '{') ADVANCE(89);
      if (lookahead == '|') ADVANCE(35);
      if (lookahead == '}') ADVANCE(90);
      if (lookahead == '~') ADVANCE(114);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(77)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 78:
      if (eof) ADVANCE(80);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '&') ADVANCE(96);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(120);
      if (lookahead == ')') ADVANCE(121);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '+') ADVANCE(115);
      if (lookahead == ',') ADVANCE(82);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == '>') ADVANCE(112);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == '{') ADVANCE(89);
      if (lookahead == '}') ADVANCE(90);
      if (lookahead == '~') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(79)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 79:
      if (eof) ADVANCE(80);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '&') ADVANCE(96);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(121);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '+') ADVANCE(115);
      if (lookahead == ',') ADVANCE(82);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == '>') ADVANCE(112);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == '{') ADVANCE(89);
      if (lookahead == '}') ADVANCE(90);
      if (lookahead == '~') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(79)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_keyframes_statement_token1);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_from);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_merge_attribute_token1);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(109);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(106);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '_') ADVANCE(95);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '_') ADVANCE(95);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')') ADVANCE(94);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_important);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      if (lookahead == ')') ADVANCE(94);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%') ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '%') ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '%') ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(165);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_string_value);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '"') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\'') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '/') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(273);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(193);
      if (lookahead == 'c') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(193);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(193);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(193);
      if (lookahead == 'l') ADVANCE(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(193);
      if (lookahead == 'l') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(193);
      if (lookahead == 'n') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(193);
      if (lookahead == 'o') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(193);
      if (lookahead == 'o') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(193);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(193);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(193);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(193);
      if (lookahead == 'y') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(192);
      if (lookahead == '-') ADVANCE(202);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == '_') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(273);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(192);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(273);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(273);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(201);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '/') ADVANCE(272);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '/') ADVANCE(268);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(31);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(202);
      if (lookahead == '/') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(273);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(273);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(273);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(216);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(225);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(241);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(242);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(229);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(238);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(263);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(255);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(252);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(253);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(219);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(220);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == 'm') ADVANCE(245);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == 'm') ADVANCE(230);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == 'm') ADVANCE(232);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == 'm') ADVANCE(233);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == 'o') ADVANCE(250);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == 'o') ADVANCE(251);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == 'p') ADVANCE(243);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == 'p') ADVANCE(221);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == 'p') ADVANCE(244);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == 'p') ADVANCE(247);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == 'r') ADVANCE(258);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == 'r') ADVANCE(259);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == 'r') ADVANCE(261);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == 'r') ADVANCE(223);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == 'r') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == 's') ADVANCE(87);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == 's') ADVANCE(246);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == 's') ADVANCE(231);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == 't') ADVANCE(254);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == 'u') ADVANCE(248);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == 'y') ADVANCE(235);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == 'y') ADVANCE(236);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(234);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead == '/') ADVANCE(270);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead == '/') ADVANCE(271);
      if (sym_single_line_comment_character_set_1(lookahead)) ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (sym_single_line_comment_character_set_2(lookahead)) ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(268);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (sym_single_line_comment_character_set_2(lookahead)) ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(74);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(273);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 78},
  [2] = {.lex_state = 78},
  [3] = {.lex_state = 78},
  [4] = {.lex_state = 78},
  [5] = {.lex_state = 78},
  [6] = {.lex_state = 78},
  [7] = {.lex_state = 78},
  [8] = {.lex_state = 78},
  [9] = {.lex_state = 78},
  [10] = {.lex_state = 78},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 5, .external_lex_state = 1},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 78},
  [18] = {.lex_state = 78},
  [19] = {.lex_state = 78},
  [20] = {.lex_state = 78},
  [21] = {.lex_state = 2, .external_lex_state = 1},
  [22] = {.lex_state = 78},
  [23] = {.lex_state = 78},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 78},
  [30] = {.lex_state = 78},
  [31] = {.lex_state = 78},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 78},
  [34] = {.lex_state = 78},
  [35] = {.lex_state = 78},
  [36] = {.lex_state = 78},
  [37] = {.lex_state = 78},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 78},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 78},
  [42] = {.lex_state = 78},
  [43] = {.lex_state = 78},
  [44] = {.lex_state = 78},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 78},
  [48] = {.lex_state = 78},
  [49] = {.lex_state = 78},
  [50] = {.lex_state = 78},
  [51] = {.lex_state = 78},
  [52] = {.lex_state = 78},
  [53] = {.lex_state = 78},
  [54] = {.lex_state = 78},
  [55] = {.lex_state = 78},
  [56] = {.lex_state = 78},
  [57] = {.lex_state = 78},
  [58] = {.lex_state = 78},
  [59] = {.lex_state = 78},
  [60] = {.lex_state = 78},
  [61] = {.lex_state = 78},
  [62] = {.lex_state = 78},
  [63] = {.lex_state = 78},
  [64] = {.lex_state = 78},
  [65] = {.lex_state = 78},
  [66] = {.lex_state = 78},
  [67] = {.lex_state = 78},
  [68] = {.lex_state = 78},
  [69] = {.lex_state = 78},
  [70] = {.lex_state = 78},
  [71] = {.lex_state = 78},
  [72] = {.lex_state = 78},
  [73] = {.lex_state = 78},
  [74] = {.lex_state = 78},
  [75] = {.lex_state = 78},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 78},
  [78] = {.lex_state = 78},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 17},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 17},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 78, .external_lex_state = 1},
  [98] = {.lex_state = 78, .external_lex_state = 1},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 17},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 17},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 78, .external_lex_state = 1},
  [123] = {.lex_state = 78, .external_lex_state = 1},
  [124] = {.lex_state = 78, .external_lex_state = 1},
  [125] = {.lex_state = 78, .external_lex_state = 1},
  [126] = {.lex_state = 78, .external_lex_state = 1},
  [127] = {.lex_state = 78, .external_lex_state = 1},
  [128] = {.lex_state = 78, .external_lex_state = 1},
  [129] = {.lex_state = 78, .external_lex_state = 1},
  [130] = {.lex_state = 78, .external_lex_state = 1},
  [131] = {.lex_state = 78, .external_lex_state = 1},
  [132] = {.lex_state = 78, .external_lex_state = 1},
  [133] = {.lex_state = 11, .external_lex_state = 1},
  [134] = {.lex_state = 78, .external_lex_state = 1},
  [135] = {.lex_state = 78, .external_lex_state = 1},
  [136] = {.lex_state = 78, .external_lex_state = 1},
  [137] = {.lex_state = 78, .external_lex_state = 1},
  [138] = {.lex_state = 78, .external_lex_state = 1},
  [139] = {.lex_state = 78, .external_lex_state = 1},
  [140] = {.lex_state = 11, .external_lex_state = 1},
  [141] = {.lex_state = 78, .external_lex_state = 1},
  [142] = {.lex_state = 78, .external_lex_state = 1},
  [143] = {.lex_state = 78, .external_lex_state = 1},
  [144] = {.lex_state = 78, .external_lex_state = 1},
  [145] = {.lex_state = 78, .external_lex_state = 1},
  [146] = {.lex_state = 78, .external_lex_state = 1},
  [147] = {.lex_state = 11, .external_lex_state = 1},
  [148] = {.lex_state = 78, .external_lex_state = 1},
  [149] = {.lex_state = 78, .external_lex_state = 1},
  [150] = {.lex_state = 16},
  [151] = {.lex_state = 78, .external_lex_state = 1},
  [152] = {.lex_state = 17},
  [153] = {.lex_state = 17},
  [154] = {.lex_state = 17},
  [155] = {.lex_state = 78, .external_lex_state = 1},
  [156] = {.lex_state = 17},
  [157] = {.lex_state = 17},
  [158] = {.lex_state = 17},
  [159] = {.lex_state = 17},
  [160] = {.lex_state = 13},
  [161] = {.lex_state = 13},
  [162] = {.lex_state = 17},
  [163] = {.lex_state = 17},
  [164] = {.lex_state = 17},
  [165] = {.lex_state = 17},
  [166] = {.lex_state = 17},
  [167] = {.lex_state = 17},
  [168] = {.lex_state = 17},
  [169] = {.lex_state = 17},
  [170] = {.lex_state = 17},
  [171] = {.lex_state = 17},
  [172] = {.lex_state = 15},
  [173] = {.lex_state = 15},
  [174] = {.lex_state = 15},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 15},
  [177] = {.lex_state = 12},
  [178] = {.lex_state = 12},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 15},
  [181] = {.lex_state = 15},
  [182] = {.lex_state = 15},
  [183] = {.lex_state = 12},
  [184] = {.lex_state = 12},
  [185] = {.lex_state = 15},
  [186] = {.lex_state = 15},
  [187] = {.lex_state = 15},
  [188] = {.lex_state = 15},
  [189] = {.lex_state = 12},
  [190] = {.lex_state = 12},
  [191] = {.lex_state = 12},
  [192] = {.lex_state = 15},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 15},
  [202] = {.lex_state = 7},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 7},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 15},
  [207] = {.lex_state = 15},
  [208] = {.lex_state = 15},
  [209] = {.lex_state = 15},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 15},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 15},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 12},
  [220] = {.lex_state = 12},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 12},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 12},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 78},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 78},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 11},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 3},
  [243] = {.lex_state = 24},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 78},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 78},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 78},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 30},
  [262] = {.lex_state = 78},
  [263] = {.lex_state = 78},
  [264] = {.lex_state = 78},
  [265] = {.lex_state = 2},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 78},
  [270] = {.lex_state = 78},
  [271] = {.lex_state = 78},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 30},
  [274] = {.lex_state = 78},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 78},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 30},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 78},
  [281] = {.lex_state = 0},
};

enum {
  ts_external_token__descendant_operator = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__descendant_operator] = sym__descendant_operator,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__descendant_operator] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATimport] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_ATmedia] = ACTIONS(1),
    [anon_sym_ATcharset] = ACTIONS(1),
    [anon_sym_ATnamespace] = ACTIONS(1),
    [anon_sym_ATkeyframes] = ACTIONS(1),
    [aux_sym_keyframes_statement_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_from] = ACTIONS(1),
    [sym_to] = ACTIONS(1),
    [anon_sym_ATsupports] = ACTIONS(1),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(1),
    [aux_sym_merge_attribute_token1] = ACTIONS(1),
    [sym_nesting_selector] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_DOLLAR_EQ] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_important] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_only] = ACTIONS(1),
    [anon_sym_selector] = ACTIONS(1),
    [aux_sym_color_value_token1] = ACTIONS(1),
    [sym_string_value] = ACTIONS(1),
    [aux_sym_integer_value_token1] = ACTIONS(1),
    [aux_sym_float_value_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_at_keyword] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(1),
  },
  [1] = {
    [sym_stylesheet] = STATE(255),
    [sym_import_statement] = STATE(8),
    [sym_media_statement] = STATE(8),
    [sym_charset_statement] = STATE(8),
    [sym_namespace_statement] = STATE(8),
    [sym_keyframes_statement] = STATE(8),
    [sym_supports_statement] = STATE(8),
    [sym_at_rule] = STATE(8),
    [sym_rule_set] = STATE(8),
    [sym_selectors] = STATE(245),
    [sym_merge_selector] = STATE(132),
    [sym_merge_attribute] = STATE(257),
    [sym__selector] = STATE(132),
    [sym_universal_selector] = STATE(132),
    [sym_class_selector] = STATE(132),
    [sym_pseudo_class_selector] = STATE(132),
    [sym_pseudo_element_selector] = STATE(132),
    [sym_id_selector] = STATE(132),
    [sym_attribute_selector] = STATE(132),
    [sym_child_selector] = STATE(132),
    [sym_descendant_selector] = STATE(132),
    [sym_sibling_selector] = STATE(132),
    [sym_adjacent_sibling_selector] = STATE(132),
    [sym_declaration] = STATE(8),
    [aux_sym_stylesheet_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [aux_sym_keyframes_statement_token1] = ACTIONS(15),
    [anon_sym_ATsupports] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(19),
    [sym_identifier] = ACTIONS(33),
    [sym_at_keyword] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_ATimport,
    ACTIONS(39), 1,
      anon_sym_ATmedia,
    ACTIONS(41), 1,
      anon_sym_ATcharset,
    ACTIONS(43), 1,
      anon_sym_ATnamespace,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      anon_sym_ATsupports,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(53), 1,
      sym_at_keyword,
    STATE(240), 1,
      sym_selectors,
    STATE(275), 1,
      sym_last_declaration,
    STATE(281), 1,
      sym_merge_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(45), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(5), 10,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(132), 12,
      sym_merge_selector,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [90] = 22,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_ATimport,
    ACTIONS(39), 1,
      anon_sym_ATmedia,
    ACTIONS(41), 1,
      anon_sym_ATcharset,
    ACTIONS(43), 1,
      anon_sym_ATnamespace,
    ACTIONS(49), 1,
      anon_sym_ATsupports,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(53), 1,
      sym_at_keyword,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(240), 1,
      sym_selectors,
    STATE(268), 1,
      sym_last_declaration,
    STATE(281), 1,
      sym_merge_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(45), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(10), 10,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(132), 12,
      sym_merge_selector,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [180] = 22,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_ATimport,
    ACTIONS(39), 1,
      anon_sym_ATmedia,
    ACTIONS(41), 1,
      anon_sym_ATcharset,
    ACTIONS(43), 1,
      anon_sym_ATnamespace,
    ACTIONS(49), 1,
      anon_sym_ATsupports,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(53), 1,
      sym_at_keyword,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(240), 1,
      sym_selectors,
    STATE(249), 1,
      sym_last_declaration,
    STATE(281), 1,
      sym_merge_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(45), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(3), 10,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(132), 12,
      sym_merge_selector,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [270] = 22,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_ATimport,
    ACTIONS(39), 1,
      anon_sym_ATmedia,
    ACTIONS(41), 1,
      anon_sym_ATcharset,
    ACTIONS(43), 1,
      anon_sym_ATnamespace,
    ACTIONS(49), 1,
      anon_sym_ATsupports,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(53), 1,
      sym_at_keyword,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(240), 1,
      sym_selectors,
    STATE(266), 1,
      sym_last_declaration,
    STATE(281), 1,
      sym_merge_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(45), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(10), 10,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(132), 12,
      sym_merge_selector,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [360] = 22,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_ATimport,
    ACTIONS(39), 1,
      anon_sym_ATmedia,
    ACTIONS(41), 1,
      anon_sym_ATcharset,
    ACTIONS(43), 1,
      anon_sym_ATnamespace,
    ACTIONS(49), 1,
      anon_sym_ATsupports,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(53), 1,
      sym_at_keyword,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(240), 1,
      sym_selectors,
    STATE(258), 1,
      sym_last_declaration,
    STATE(281), 1,
      sym_merge_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(45), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(10), 10,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(132), 12,
      sym_merge_selector,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [450] = 22,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_ATimport,
    ACTIONS(39), 1,
      anon_sym_ATmedia,
    ACTIONS(41), 1,
      anon_sym_ATcharset,
    ACTIONS(43), 1,
      anon_sym_ATnamespace,
    ACTIONS(49), 1,
      anon_sym_ATsupports,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(53), 1,
      sym_at_keyword,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(240), 1,
      sym_selectors,
    STATE(252), 1,
      sym_last_declaration,
    STATE(281), 1,
      sym_merge_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(45), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(6), 10,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(132), 12,
      sym_merge_selector,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [540] = 21,
    ACTIONS(7), 1,
      anon_sym_ATimport,
    ACTIONS(9), 1,
      anon_sym_ATmedia,
    ACTIONS(11), 1,
      anon_sym_ATcharset,
    ACTIONS(13), 1,
      anon_sym_ATnamespace,
    ACTIONS(17), 1,
      anon_sym_ATsupports,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym_at_keyword,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    STATE(245), 1,
      sym_selectors,
    STATE(257), 1,
      sym_merge_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(15), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(9), 10,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_stylesheet_repeat1,
    STATE(132), 12,
      sym_merge_selector,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [627] = 21,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      anon_sym_ATimport,
    ACTIONS(72), 1,
      anon_sym_ATmedia,
    ACTIONS(75), 1,
      anon_sym_ATcharset,
    ACTIONS(78), 1,
      anon_sym_ATnamespace,
    ACTIONS(84), 1,
      anon_sym_ATsupports,
    ACTIONS(90), 1,
      anon_sym_STAR,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(96), 1,
      anon_sym_COLON,
    ACTIONS(99), 1,
      anon_sym_COLON_COLON,
    ACTIONS(102), 1,
      anon_sym_POUND,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(111), 1,
      sym_at_keyword,
    STATE(245), 1,
      sym_selectors,
    STATE(257), 1,
      sym_merge_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(81), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(87), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(9), 10,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_stylesheet_repeat1,
    STATE(132), 12,
      sym_merge_selector,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [714] = 21,
    ACTIONS(114), 1,
      anon_sym_ATimport,
    ACTIONS(117), 1,
      anon_sym_ATmedia,
    ACTIONS(120), 1,
      anon_sym_ATcharset,
    ACTIONS(123), 1,
      anon_sym_ATnamespace,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    ACTIONS(131), 1,
      anon_sym_ATsupports,
    ACTIONS(137), 1,
      anon_sym_STAR,
    ACTIONS(140), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      anon_sym_COLON,
    ACTIONS(146), 1,
      anon_sym_COLON_COLON,
    ACTIONS(149), 1,
      anon_sym_POUND,
    ACTIONS(152), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_identifier,
    ACTIONS(158), 1,
      sym_at_keyword,
    STATE(240), 1,
      sym_selectors,
    STATE(281), 1,
      sym_merge_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(126), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(134), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(10), 10,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(132), 12,
      sym_merge_selector,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [801] = 18,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(161), 1,
      sym_nesting_selector,
    ACTIONS(163), 1,
      anon_sym_DOT,
    ACTIONS(165), 1,
      anon_sym_POUND,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(171), 1,
      sym_string_value,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      sym_plain_value,
    STATE(38), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(121), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(137), 12,
      sym_merge_selector,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [874] = 17,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(163), 1,
      anon_sym_DOT,
    ACTIONS(165), 1,
      anon_sym_POUND,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(171), 1,
      sym_string_value,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      sym_plain_value,
    ACTIONS(181), 1,
      sym_nesting_selector,
    STATE(80), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(121), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(151), 12,
      sym_merge_selector,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [944] = 16,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(185), 1,
      anon_sym_SEMI,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    ACTIONS(189), 1,
      anon_sym_STAR,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      sym_important,
    ACTIONS(197), 1,
      sym_string_value,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(201), 1,
      sym_plain_value,
    STATE(26), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(193), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(101), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1002] = 7,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(82), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(205), 2,
      anon_sym_STAR,
      sym_string_value,
    ACTIONS(207), 3,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PLUS,
    ACTIONS(211), 7,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(203), 9,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LPAREN_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_RPAREN,
  [1042] = 15,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(185), 1,
      anon_sym_SEMI,
    ACTIONS(189), 1,
      anon_sym_STAR,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(197), 1,
      sym_string_value,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(201), 1,
      sym_plain_value,
    ACTIONS(213), 1,
      sym_important,
    STATE(32), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(193), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(101), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1097] = 15,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(189), 1,
      anon_sym_STAR,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(197), 1,
      sym_string_value,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(201), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_SEMI,
    ACTIONS(217), 1,
      sym_important,
    STATE(40), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(193), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(101), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1152] = 10,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(219), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(125), 12,
      sym_merge_selector,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [1196] = 10,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(223), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(145), 12,
      sym_merge_selector,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [1240] = 10,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(225), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(149), 12,
      sym_merge_selector,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [1284] = 10,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(227), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(122), 12,
      sym_merge_selector,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [1328] = 5,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(231), 2,
      anon_sym_STAR,
      sym_string_value,
    ACTIONS(233), 3,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PLUS,
    ACTIONS(235), 7,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(229), 9,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LPAREN_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_RPAREN,
  [1362] = 10,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(237), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(155), 12,
      sym_merge_selector,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [1406] = 10,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(239), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(148), 12,
      sym_merge_selector,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [1450] = 13,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(179), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    ACTIONS(245), 1,
      sym_string_value,
    STATE(46), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(226), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(241), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(121), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1498] = 12,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(252), 1,
      anon_sym_POUND,
    ACTIONS(255), 1,
      anon_sym_LPAREN2,
    ACTIONS(258), 1,
      sym_string_value,
    ACTIONS(261), 1,
      aux_sym_integer_value_token1,
    ACTIONS(264), 1,
      aux_sym_float_value_token1,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(270), 1,
      sym_plain_value,
    STATE(25), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(250), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_important,
    STATE(101), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1544] = 14,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(197), 1,
      sym_string_value,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(201), 1,
      sym_plain_value,
    ACTIONS(273), 1,
      anon_sym_SEMI,
    ACTIONS(275), 1,
      anon_sym_RBRACE,
    ACTIONS(277), 1,
      sym_important,
    STATE(25), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(101), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1594] = 13,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(179), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(245), 1,
      sym_string_value,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(215), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(241), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(121), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1642] = 13,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(179), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(245), 1,
      sym_string_value,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(225), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(241), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(121), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1690] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(283), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(285), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [1717] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(287), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(289), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [1744] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(291), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(293), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [1771] = 13,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(197), 1,
      sym_string_value,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(201), 1,
      sym_plain_value,
    ACTIONS(273), 1,
      anon_sym_SEMI,
    ACTIONS(295), 1,
      sym_important,
    STATE(25), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(101), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1818] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(297), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(299), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [1845] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(301), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(303), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [1872] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(305), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(307), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [1899] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(309), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(311), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [1926] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(313), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(315), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [1953] = 13,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(179), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(245), 1,
      sym_string_value,
    ACTIONS(317), 1,
      anon_sym_COMMA,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(233), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(121), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [2000] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(321), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(323), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2027] = 13,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(197), 1,
      sym_string_value,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(201), 1,
      sym_plain_value,
    ACTIONS(325), 1,
      anon_sym_SEMI,
    ACTIONS(327), 1,
      sym_important,
    STATE(25), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(101), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [2074] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(329), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(331), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2101] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(333), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(335), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2128] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(337), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(339), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2155] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(341), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(343), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2182] = 5,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    STATE(82), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(205), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      sym_string_value,
    ACTIONS(211), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
  [2213] = 11,
    ACTIONS(349), 1,
      anon_sym_POUND,
    ACTIONS(352), 1,
      anon_sym_LPAREN2,
    ACTIONS(355), 1,
      sym_string_value,
    ACTIONS(358), 1,
      aux_sym_integer_value_token1,
    ACTIONS(361), 1,
      aux_sym_float_value_token1,
    ACTIONS(364), 1,
      sym_identifier,
    ACTIONS(367), 1,
      sym_plain_value,
    STATE(46), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(347), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(121), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [2256] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(287), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(289), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [2283] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(370), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(372), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [2310] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(374), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(376), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [2337] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(378), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(380), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [2364] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(382), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(384), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [2391] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(386), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(388), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2418] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(329), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(331), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2445] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(297), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(299), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2472] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(341), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(343), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2499] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(301), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(303), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2526] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(305), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(307), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2553] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(390), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(392), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2580] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(313), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(315), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2607] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(394), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(396), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2634] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(291), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(293), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2661] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(309), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(311), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2688] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(321), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(323), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2715] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(333), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(335), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2742] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(337), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(339), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2769] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(382), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(384), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [2796] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(386), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(388), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2823] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(398), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(400), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [2850] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(402), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(404), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [2877] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(394), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(396), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2904] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(390), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(392), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2931] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(398), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(400), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [2958] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(370), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(372), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [2985] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(402), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(404), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [3012] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(283), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(285), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [3039] = 11,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(179), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(245), 1,
      sym_string_value,
    STATE(46), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(406), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(121), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3082] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(374), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(376), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [3109] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(378), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(380), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
  [3136] = 4,
    ACTIONS(412), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(410), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(408), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3164] = 11,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(179), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(245), 1,
      sym_string_value,
    STATE(46), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(414), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(121), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3206] = 4,
    ACTIONS(420), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(418), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(416), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3234] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(424), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(422), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3259] = 11,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(179), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(245), 1,
      sym_string_value,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(121), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3300] = 11,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(179), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(245), 1,
      sym_string_value,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(121), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3341] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(432), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(430), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3366] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(436), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(434), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3391] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(440), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(438), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3416] = 9,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(446), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      anon_sym_selector,
    ACTIONS(454), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(444), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(448), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(452), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(210), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [3453] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(458), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(456), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3478] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(462), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(460), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3503] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(466), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(464), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3528] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(470), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(468), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3553] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(474), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(472), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3578] = 9,
    ACTIONS(446), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      anon_sym_selector,
    ACTIONS(454), 1,
      sym_identifier,
    ACTIONS(476), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(444), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(448), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(452), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(212), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [3615] = 11,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(179), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(245), 1,
      sym_string_value,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(121), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3656] = 11,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(179), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(245), 1,
      sym_string_value,
    ACTIONS(480), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(121), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3697] = 5,
    ACTIONS(484), 1,
      anon_sym_COLON,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    STATE(123), 1,
      sym_pseudo_class_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(482), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LPAREN_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3725] = 5,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_COLON,
    STATE(135), 1,
      sym_pseudo_class_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(488), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LPAREN_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3753] = 10,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(179), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(245), 1,
      sym_string_value,
    STATE(83), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(121), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3791] = 5,
    ACTIONS(189), 1,
      anon_sym_STAR,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(193), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(492), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(250), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3819] = 5,
    ACTIONS(189), 1,
      anon_sym_STAR,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(193), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(496), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(494), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3847] = 10,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(179), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(245), 1,
      sym_string_value,
    STATE(76), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(121), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3885] = 9,
    ACTIONS(498), 1,
      anon_sym_POUND,
    ACTIONS(500), 1,
      anon_sym_LPAREN2,
    ACTIONS(502), 1,
      sym_string_value,
    ACTIONS(504), 1,
      aux_sym_integer_value_token1,
    ACTIONS(506), 1,
      aux_sym_float_value_token1,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(510), 1,
      sym_plain_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(207), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3920] = 9,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(512), 1,
      sym_string_value,
    ACTIONS(514), 1,
      sym_plain_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(15), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3955] = 9,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(516), 1,
      sym_string_value,
    ACTIONS(518), 1,
      sym_plain_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(16), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3990] = 9,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(520), 1,
      sym_string_value,
    ACTIONS(522), 1,
      sym_plain_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(91), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4025] = 9,
    ACTIONS(446), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      anon_sym_selector,
    ACTIONS(454), 1,
      sym_identifier,
    ACTIONS(524), 1,
      anon_sym_SEMI,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(448), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(179), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [4060] = 9,
    ACTIONS(498), 1,
      anon_sym_POUND,
    ACTIONS(500), 1,
      anon_sym_LPAREN2,
    ACTIONS(504), 1,
      aux_sym_integer_value_token1,
    ACTIONS(506), 1,
      aux_sym_float_value_token1,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(528), 1,
      sym_string_value,
    ACTIONS(530), 1,
      sym_plain_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(211), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4095] = 9,
    ACTIONS(446), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      anon_sym_selector,
    ACTIONS(454), 1,
      sym_identifier,
    ACTIONS(532), 1,
      anon_sym_SEMI,
    ACTIONS(534), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(448), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(175), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [4130] = 9,
    ACTIONS(536), 1,
      anon_sym_POUND,
    ACTIONS(538), 1,
      anon_sym_LPAREN2,
    ACTIONS(540), 1,
      sym_string_value,
    ACTIONS(542), 1,
      aux_sym_integer_value_token1,
    ACTIONS(544), 1,
      aux_sym_float_value_token1,
    ACTIONS(546), 1,
      sym_identifier,
    ACTIONS(548), 1,
      sym_plain_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(169), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4165] = 9,
    ACTIONS(498), 1,
      anon_sym_POUND,
    ACTIONS(500), 1,
      anon_sym_LPAREN2,
    ACTIONS(504), 1,
      aux_sym_integer_value_token1,
    ACTIONS(506), 1,
      aux_sym_float_value_token1,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(550), 1,
      sym_string_value,
    ACTIONS(552), 1,
      sym_plain_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(209), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4200] = 9,
    ACTIONS(498), 1,
      anon_sym_POUND,
    ACTIONS(500), 1,
      anon_sym_LPAREN2,
    ACTIONS(504), 1,
      aux_sym_integer_value_token1,
    ACTIONS(506), 1,
      aux_sym_float_value_token1,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(554), 1,
      sym_string_value,
    ACTIONS(556), 1,
      sym_plain_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(208), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4235] = 9,
    ACTIONS(536), 1,
      anon_sym_POUND,
    ACTIONS(538), 1,
      anon_sym_LPAREN2,
    ACTIONS(542), 1,
      aux_sym_integer_value_token1,
    ACTIONS(544), 1,
      aux_sym_float_value_token1,
    ACTIONS(546), 1,
      sym_identifier,
    ACTIONS(558), 1,
      sym_string_value,
    ACTIONS(560), 1,
      sym_plain_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(88), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4270] = 9,
    ACTIONS(498), 1,
      anon_sym_POUND,
    ACTIONS(500), 1,
      anon_sym_LPAREN2,
    ACTIONS(504), 1,
      aux_sym_integer_value_token1,
    ACTIONS(506), 1,
      aux_sym_float_value_token1,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(562), 1,
      sym_string_value,
    ACTIONS(564), 1,
      sym_plain_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(180), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4305] = 9,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(566), 1,
      sym_string_value,
    ACTIONS(568), 1,
      sym_plain_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(13), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4340] = 9,
    ACTIONS(498), 1,
      anon_sym_POUND,
    ACTIONS(500), 1,
      anon_sym_LPAREN2,
    ACTIONS(504), 1,
      aux_sym_integer_value_token1,
    ACTIONS(506), 1,
      aux_sym_float_value_token1,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(570), 1,
      sym_string_value,
    ACTIONS(572), 1,
      sym_plain_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(214), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4375] = 9,
    ACTIONS(169), 1,
      anon_sym_LPAREN2,
    ACTIONS(173), 1,
      aux_sym_integer_value_token1,
    ACTIONS(175), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(574), 1,
      sym_string_value,
    ACTIONS(576), 1,
      sym_plain_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(100), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4410] = 9,
    ACTIONS(536), 1,
      anon_sym_POUND,
    ACTIONS(538), 1,
      anon_sym_LPAREN2,
    ACTIONS(542), 1,
      aux_sym_integer_value_token1,
    ACTIONS(544), 1,
      aux_sym_float_value_token1,
    ACTIONS(546), 1,
      sym_identifier,
    ACTIONS(578), 1,
      sym_string_value,
    ACTIONS(580), 1,
      sym_plain_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(94), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4445] = 9,
    ACTIONS(498), 1,
      anon_sym_POUND,
    ACTIONS(500), 1,
      anon_sym_LPAREN2,
    ACTIONS(504), 1,
      aux_sym_integer_value_token1,
    ACTIONS(506), 1,
      aux_sym_float_value_token1,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(582), 1,
      sym_string_value,
    ACTIONS(584), 1,
      sym_plain_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(201), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4480] = 9,
    ACTIONS(498), 1,
      anon_sym_POUND,
    ACTIONS(500), 1,
      anon_sym_LPAREN2,
    ACTIONS(504), 1,
      aux_sym_integer_value_token1,
    ACTIONS(506), 1,
      aux_sym_float_value_token1,
    ACTIONS(508), 1,
      sym_identifier,
    ACTIONS(586), 1,
      sym_string_value,
    ACTIONS(588), 1,
      sym_plain_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    STATE(206), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4515] = 5,
    ACTIONS(189), 1,
      anon_sym_STAR,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(193), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(592), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(590), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_RPAREN,
      anon_sym_LPAREN2,
      sym_string_value,
  [4542] = 4,
    ACTIONS(596), 1,
      anon_sym_DOT,
    ACTIONS(598), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(594), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LPAREN_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4566] = 3,
    ACTIONS(602), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(600), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LPAREN_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4588] = 3,
    ACTIONS(606), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(604), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LPAREN_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4610] = 4,
    ACTIONS(596), 1,
      anon_sym_DOT,
    ACTIONS(610), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(608), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LPAREN_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4634] = 3,
    ACTIONS(614), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(612), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LPAREN_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4656] = 3,
    ACTIONS(618), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(616), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LPAREN_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4678] = 3,
    ACTIONS(622), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(620), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LPAREN_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4700] = 3,
    ACTIONS(626), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(624), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LPAREN_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4722] = 3,
    ACTIONS(207), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(203), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LPAREN_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4744] = 3,
    ACTIONS(630), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(628), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LPAREN_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4766] = 14,
    ACTIONS(596), 1,
      anon_sym_DOT,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    ACTIONS(634), 1,
      anon_sym_LBRACE,
    ACTIONS(636), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(638), 1,
      anon_sym_COLON,
    ACTIONS(640), 1,
      anon_sym_COLON_COLON,
    ACTIONS(642), 1,
      anon_sym_POUND,
    ACTIONS(644), 1,
      anon_sym_LBRACK,
    ACTIONS(646), 1,
      anon_sym_GT,
    ACTIONS(648), 1,
      anon_sym_TILDE,
    ACTIONS(650), 1,
      anon_sym_PLUS,
    ACTIONS(652), 1,
      sym__descendant_operator,
    STATE(234), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [4810] = 5,
    ACTIONS(207), 1,
      anon_sym_PLUS,
    ACTIONS(654), 1,
      aux_sym_merge_attribute_token1,
    ACTIONS(656), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(203), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LPAREN_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
  [4836] = 3,
    ACTIONS(660), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(658), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LPAREN_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4858] = 3,
    ACTIONS(664), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(662), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LPAREN_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4880] = 3,
    ACTIONS(668), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(666), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LPAREN_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4902] = 14,
    ACTIONS(317), 1,
      anon_sym_COMMA,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    ACTIONS(596), 1,
      anon_sym_DOT,
    ACTIONS(636), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(638), 1,
      anon_sym_COLON,
    ACTIONS(640), 1,
      anon_sym_COLON_COLON,
    ACTIONS(642), 1,
      anon_sym_POUND,
    ACTIONS(644), 1,
      anon_sym_LBRACK,
    ACTIONS(646), 1,
      anon_sym_GT,
    ACTIONS(648), 1,
      anon_sym_TILDE,
    ACTIONS(650), 1,
      anon_sym_PLUS,
    ACTIONS(652), 1,
      sym__descendant_operator,
    STATE(233), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [4946] = 3,
    ACTIONS(672), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(670), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LPAREN_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4968] = 3,
    ACTIONS(676), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(674), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LPAREN_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4990] = 5,
    ACTIONS(207), 1,
      anon_sym_PLUS,
    ACTIONS(654), 1,
      aux_sym_merge_attribute_token1,
    ACTIONS(678), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(203), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LPAREN_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
  [5016] = 3,
    ACTIONS(683), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(681), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LPAREN_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5038] = 3,
    ACTIONS(687), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(685), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LPAREN_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5060] = 3,
    ACTIONS(691), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(689), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LPAREN_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5082] = 3,
    ACTIONS(695), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(693), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LPAREN_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5104] = 4,
    ACTIONS(596), 1,
      anon_sym_DOT,
    ACTIONS(699), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(697), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LPAREN_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5128] = 3,
    ACTIONS(703), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(701), 12,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LPAREN_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5150] = 5,
    ACTIONS(207), 1,
      anon_sym_PLUS,
    ACTIONS(654), 1,
      aux_sym_merge_attribute_token1,
    ACTIONS(705), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(203), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LPAREN_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
  [5176] = 4,
    ACTIONS(596), 1,
      anon_sym_DOT,
    ACTIONS(710), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(708), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LPAREN_RPAREN,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5200] = 12,
    ACTIONS(596), 1,
      anon_sym_DOT,
    ACTIONS(636), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(638), 1,
      anon_sym_COLON,
    ACTIONS(640), 1,
      anon_sym_COLON_COLON,
    ACTIONS(642), 1,
      anon_sym_POUND,
    ACTIONS(644), 1,
      anon_sym_LBRACK,
    ACTIONS(646), 1,
      anon_sym_GT,
    ACTIONS(648), 1,
      anon_sym_TILDE,
    ACTIONS(650), 1,
      anon_sym_PLUS,
    ACTIONS(652), 1,
      sym__descendant_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(712), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [5239] = 5,
    ACTIONS(714), 1,
      anon_sym_LPAREN,
    STATE(167), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(205), 3,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(211), 7,
      anon_sym_LPAREN2,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5264] = 12,
    ACTIONS(596), 1,
      anon_sym_DOT,
    ACTIONS(636), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(638), 1,
      anon_sym_COLON,
    ACTIONS(640), 1,
      anon_sym_COLON_COLON,
    ACTIONS(642), 1,
      anon_sym_POUND,
    ACTIONS(644), 1,
      anon_sym_LBRACK,
    ACTIONS(646), 1,
      anon_sym_GT,
    ACTIONS(648), 1,
      anon_sym_TILDE,
    ACTIONS(650), 1,
      anon_sym_PLUS,
    ACTIONS(652), 1,
      sym__descendant_operator,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(414), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5303] = 6,
    ACTIONS(446), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      anon_sym_selector,
    ACTIONS(454), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(448), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(221), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5329] = 6,
    ACTIONS(446), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      anon_sym_selector,
    ACTIONS(716), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(448), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(235), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5355] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(434), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(436), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5375] = 12,
    ACTIONS(596), 1,
      anon_sym_DOT,
    ACTIONS(636), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(638), 1,
      anon_sym_COLON,
    ACTIONS(640), 1,
      anon_sym_COLON_COLON,
    ACTIONS(642), 1,
      anon_sym_POUND,
    ACTIONS(644), 1,
      anon_sym_LBRACK,
    ACTIONS(646), 1,
      anon_sym_GT,
    ACTIONS(648), 1,
      anon_sym_TILDE,
    ACTIONS(650), 1,
      anon_sym_PLUS,
    ACTIONS(652), 1,
      sym__descendant_operator,
    ACTIONS(718), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [5413] = 6,
    ACTIONS(446), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      anon_sym_selector,
    ACTIONS(454), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(448), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(228), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5439] = 6,
    ACTIONS(446), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      anon_sym_selector,
    ACTIONS(454), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(448), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(200), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5465] = 6,
    ACTIONS(446), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      anon_sym_selector,
    ACTIONS(454), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(448), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(205), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5491] = 6,
    ACTIONS(446), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      anon_sym_selector,
    ACTIONS(454), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(448), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(193), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5517] = 4,
    ACTIONS(720), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(408), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(410), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5539] = 4,
    ACTIONS(722), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(416), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(418), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5561] = 6,
    ACTIONS(446), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      anon_sym_selector,
    ACTIONS(454), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(448), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(197), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5587] = 6,
    ACTIONS(446), 1,
      anon_sym_LPAREN2,
    ACTIONS(450), 1,
      anon_sym_selector,
    ACTIONS(454), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(448), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(194), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5613] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(430), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(432), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5632] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(472), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(474), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5651] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(468), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(470), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5670] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(422), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(424), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5689] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(438), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(440), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5708] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(464), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(466), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5727] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(460), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(462), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5746] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(456), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(458), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5765] = 5,
    ACTIONS(211), 1,
      anon_sym_SLASH,
    ACTIONS(724), 1,
      anon_sym_LPAREN,
    STATE(188), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(205), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5787] = 4,
    ACTIONS(410), 1,
      anon_sym_SLASH,
    ACTIONS(726), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(408), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5806] = 4,
    ACTIONS(418), 1,
      anon_sym_SLASH,
    ACTIONS(728), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(416), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5825] = 7,
    ACTIONS(534), 1,
      anon_sym_LBRACE,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    ACTIONS(732), 1,
      anon_sym_SEMI,
    STATE(62), 1,
      sym_block,
    STATE(213), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(734), 2,
      anon_sym_and,
      anon_sym_or,
  [5849] = 3,
    ACTIONS(458), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(456), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5865] = 3,
    ACTIONS(738), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(736), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
  [5881] = 3,
    ACTIONS(742), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(740), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
  [5897] = 7,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    ACTIONS(744), 1,
      anon_sym_SEMI,
    STATE(36), 1,
      sym_block,
    STATE(203), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(734), 2,
      anon_sym_and,
      anon_sym_or,
  [5921] = 3,
    ACTIONS(466), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(464), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5937] = 3,
    ACTIONS(462), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(460), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5953] = 3,
    ACTIONS(474), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(472), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5969] = 6,
    ACTIONS(746), 1,
      anon_sym_RBRACE,
    ACTIONS(751), 1,
      aux_sym_integer_value_token1,
    STATE(241), 1,
      sym_integer_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(748), 2,
      sym_from,
      sym_to,
    STATE(183), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [5991] = 6,
    ACTIONS(754), 1,
      anon_sym_RBRACE,
    ACTIONS(758), 1,
      aux_sym_integer_value_token1,
    STATE(241), 1,
      sym_integer_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(756), 2,
      sym_from,
      sym_to,
    STATE(191), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [6013] = 3,
    ACTIONS(432), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(430), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6029] = 3,
    ACTIONS(436), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(434), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6045] = 3,
    ACTIONS(440), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(438), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6061] = 3,
    ACTIONS(424), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(422), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6077] = 6,
    ACTIONS(758), 1,
      aux_sym_integer_value_token1,
    ACTIONS(760), 1,
      anon_sym_RBRACE,
    STATE(241), 1,
      sym_integer_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(756), 2,
      sym_from,
      sym_to,
    STATE(190), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [6099] = 6,
    ACTIONS(758), 1,
      aux_sym_integer_value_token1,
    ACTIONS(762), 1,
      anon_sym_RBRACE,
    STATE(241), 1,
      sym_integer_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(756), 2,
      sym_from,
      sym_to,
    STATE(183), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [6121] = 6,
    ACTIONS(758), 1,
      aux_sym_integer_value_token1,
    ACTIONS(764), 1,
      anon_sym_RBRACE,
    STATE(241), 1,
      sym_integer_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(756), 2,
      sym_from,
      sym_to,
    STATE(183), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [6143] = 3,
    ACTIONS(470), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(468), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6159] = 6,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    STATE(72), 1,
      sym_block,
    STATE(216), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(734), 2,
      anon_sym_and,
      anon_sym_or,
  [6180] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(766), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6193] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(768), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6206] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(770), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6219] = 6,
    ACTIONS(534), 1,
      anon_sym_LBRACE,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      sym_block,
    STATE(218), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(734), 2,
      anon_sym_and,
      anon_sym_or,
  [6240] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(772), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6253] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(774), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6266] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(776), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6279] = 4,
    ACTIONS(778), 1,
      anon_sym_SEMI,
    ACTIONS(782), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(780), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6295] = 6,
    ACTIONS(714), 1,
      anon_sym_LPAREN,
    ACTIONS(784), 1,
      sym_string_value,
    ACTIONS(786), 1,
      sym_identifier,
    STATE(167), 1,
      sym_arguments,
    STATE(251), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [6315] = 6,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    ACTIONS(788), 1,
      anon_sym_SEMI,
    STATE(41), 1,
      sym_block,
    STATE(217), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [6335] = 6,
    ACTIONS(714), 1,
      anon_sym_LPAREN,
    ACTIONS(786), 1,
      sym_identifier,
    ACTIONS(790), 1,
      sym_string_value,
    STATE(167), 1,
      sym_arguments,
    STATE(250), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [6355] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(734), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(792), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [6369] = 4,
    ACTIONS(782), 1,
      anon_sym_SLASH,
    ACTIONS(794), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(780), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6385] = 4,
    ACTIONS(782), 1,
      anon_sym_SLASH,
    ACTIONS(796), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(780), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6401] = 4,
    ACTIONS(782), 1,
      anon_sym_SLASH,
    ACTIONS(798), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(780), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6417] = 4,
    ACTIONS(782), 1,
      anon_sym_SLASH,
    ACTIONS(800), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(780), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6433] = 5,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    ACTIONS(802), 1,
      anon_sym_SEMI,
    STATE(231), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(734), 2,
      anon_sym_and,
      anon_sym_or,
  [6451] = 4,
    ACTIONS(782), 1,
      anon_sym_SLASH,
    ACTIONS(804), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(780), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6467] = 5,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    ACTIONS(806), 1,
      anon_sym_SEMI,
    STATE(236), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(734), 2,
      anon_sym_and,
      anon_sym_or,
  [6485] = 6,
    ACTIONS(534), 1,
      anon_sym_LBRACE,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    ACTIONS(808), 1,
      anon_sym_SEMI,
    STATE(53), 1,
      sym_block,
    STATE(217), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [6505] = 4,
    ACTIONS(782), 1,
      anon_sym_SLASH,
    ACTIONS(810), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(780), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6521] = 4,
    ACTIONS(812), 1,
      anon_sym_RPAREN,
    STATE(222), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(241), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6536] = 5,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    STATE(37), 1,
      sym_block,
    STATE(217), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [6553] = 4,
    ACTIONS(814), 1,
      anon_sym_COMMA,
    STATE(217), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(792), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [6568] = 5,
    ACTIONS(534), 1,
      anon_sym_LBRACE,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      sym_block,
    STATE(217), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [6585] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(376), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [6596] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(817), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [6607] = 4,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(734), 2,
      anon_sym_and,
      anon_sym_or,
  [6622] = 4,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    STATE(222), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(819), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6637] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(321), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [6648] = 3,
    ACTIONS(822), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(774), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6661] = 4,
    ACTIONS(824), 1,
      anon_sym_RPAREN,
    STATE(222), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(241), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6676] = 4,
    ACTIONS(826), 1,
      anon_sym_RPAREN,
    STATE(222), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(241), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6691] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(297), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [6702] = 4,
    ACTIONS(534), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(734), 2,
      anon_sym_and,
      anon_sym_or,
  [6717] = 4,
    ACTIONS(828), 1,
      sym_string_value,
    ACTIONS(830), 1,
      sym_identifier,
    STATE(253), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [6731] = 4,
    ACTIONS(712), 1,
      anon_sym_LBRACE,
    ACTIONS(832), 1,
      anon_sym_COMMA,
    STATE(230), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [6745] = 4,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    ACTIONS(835), 1,
      anon_sym_SEMI,
    STATE(217), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [6759] = 4,
    ACTIONS(837), 1,
      sym_string_value,
    ACTIONS(839), 1,
      sym_identifier,
    STATE(272), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [6773] = 4,
    ACTIONS(317), 1,
      anon_sym_COMMA,
    ACTIONS(841), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [6787] = 4,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    ACTIONS(843), 1,
      anon_sym_LBRACE,
    STATE(230), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [6801] = 3,
    ACTIONS(845), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
    ACTIONS(734), 2,
      anon_sym_and,
      anon_sym_or,
  [6813] = 4,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    ACTIONS(847), 1,
      anon_sym_SEMI,
    STATE(217), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [6827] = 4,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
    ACTIONS(849), 1,
      anon_sym_COMMA,
    STATE(237), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [6841] = 3,
    ACTIONS(273), 1,
      anon_sym_SEMI,
    ACTIONS(275), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [6852] = 3,
    ACTIONS(408), 1,
      anon_sym_LBRACE,
    ACTIONS(852), 1,
      sym_unit,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [6863] = 3,
    ACTIONS(534), 1,
      anon_sym_LBRACE,
    STATE(70), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [6874] = 3,
    ACTIONS(854), 1,
      anon_sym_LBRACE,
    STATE(220), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [6885] = 3,
    ACTIONS(714), 1,
      anon_sym_LPAREN,
    STATE(167), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [6896] = 3,
    ACTIONS(856), 1,
      aux_sym_color_value_token1,
    ACTIONS(858), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [6907] = 3,
    ACTIONS(860), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym_keyframe_block_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [6918] = 3,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    STATE(60), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [6929] = 3,
    ACTIONS(862), 1,
      anon_sym_SEMI,
    ACTIONS(864), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [6940] = 3,
    ACTIONS(866), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_keyframe_block_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [6951] = 2,
    ACTIONS(273), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [6959] = 2,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [6967] = 2,
    ACTIONS(868), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [6975] = 2,
    ACTIONS(870), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [6983] = 2,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [6991] = 2,
    ACTIONS(872), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [6999] = 2,
    ACTIONS(874), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [7007] = 2,
    ACTIONS(876), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [7015] = 2,
    ACTIONS(878), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [7023] = 2,
    ACTIONS(880), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [7031] = 2,
    ACTIONS(882), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [7039] = 2,
    ACTIONS(884), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [7047] = 2,
    ACTIONS(862), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [7055] = 2,
    ACTIONS(886), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [7063] = 2,
    ACTIONS(888), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [7071] = 2,
    ACTIONS(890), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [7079] = 2,
    ACTIONS(892), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [7087] = 2,
    ACTIONS(894), 1,
      anon_sym_LPAREN2,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [7095] = 2,
    ACTIONS(896), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [7103] = 2,
    ACTIONS(325), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [7111] = 2,
    ACTIONS(898), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [7119] = 2,
    ACTIONS(900), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [7127] = 2,
    ACTIONS(902), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [7135] = 2,
    ACTIONS(904), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [7143] = 2,
    ACTIONS(906), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [7151] = 2,
    ACTIONS(908), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [7159] = 2,
    ACTIONS(910), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [7167] = 2,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [7175] = 2,
    ACTIONS(912), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [7183] = 2,
    ACTIONS(914), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [7191] = 2,
    ACTIONS(916), 1,
      aux_sym_color_value_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [7199] = 2,
    ACTIONS(918), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [7207] = 2,
    ACTIONS(920), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
  [7215] = 2,
    ACTIONS(922), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_single_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 90,
  [SMALL_STATE(4)] = 180,
  [SMALL_STATE(5)] = 270,
  [SMALL_STATE(6)] = 360,
  [SMALL_STATE(7)] = 450,
  [SMALL_STATE(8)] = 540,
  [SMALL_STATE(9)] = 627,
  [SMALL_STATE(10)] = 714,
  [SMALL_STATE(11)] = 801,
  [SMALL_STATE(12)] = 874,
  [SMALL_STATE(13)] = 944,
  [SMALL_STATE(14)] = 1002,
  [SMALL_STATE(15)] = 1042,
  [SMALL_STATE(16)] = 1097,
  [SMALL_STATE(17)] = 1152,
  [SMALL_STATE(18)] = 1196,
  [SMALL_STATE(19)] = 1240,
  [SMALL_STATE(20)] = 1284,
  [SMALL_STATE(21)] = 1328,
  [SMALL_STATE(22)] = 1362,
  [SMALL_STATE(23)] = 1406,
  [SMALL_STATE(24)] = 1450,
  [SMALL_STATE(25)] = 1498,
  [SMALL_STATE(26)] = 1544,
  [SMALL_STATE(27)] = 1594,
  [SMALL_STATE(28)] = 1642,
  [SMALL_STATE(29)] = 1690,
  [SMALL_STATE(30)] = 1717,
  [SMALL_STATE(31)] = 1744,
  [SMALL_STATE(32)] = 1771,
  [SMALL_STATE(33)] = 1818,
  [SMALL_STATE(34)] = 1845,
  [SMALL_STATE(35)] = 1872,
  [SMALL_STATE(36)] = 1899,
  [SMALL_STATE(37)] = 1926,
  [SMALL_STATE(38)] = 1953,
  [SMALL_STATE(39)] = 2000,
  [SMALL_STATE(40)] = 2027,
  [SMALL_STATE(41)] = 2074,
  [SMALL_STATE(42)] = 2101,
  [SMALL_STATE(43)] = 2128,
  [SMALL_STATE(44)] = 2155,
  [SMALL_STATE(45)] = 2182,
  [SMALL_STATE(46)] = 2213,
  [SMALL_STATE(47)] = 2256,
  [SMALL_STATE(48)] = 2283,
  [SMALL_STATE(49)] = 2310,
  [SMALL_STATE(50)] = 2337,
  [SMALL_STATE(51)] = 2364,
  [SMALL_STATE(52)] = 2391,
  [SMALL_STATE(53)] = 2418,
  [SMALL_STATE(54)] = 2445,
  [SMALL_STATE(55)] = 2472,
  [SMALL_STATE(56)] = 2499,
  [SMALL_STATE(57)] = 2526,
  [SMALL_STATE(58)] = 2553,
  [SMALL_STATE(59)] = 2580,
  [SMALL_STATE(60)] = 2607,
  [SMALL_STATE(61)] = 2634,
  [SMALL_STATE(62)] = 2661,
  [SMALL_STATE(63)] = 2688,
  [SMALL_STATE(64)] = 2715,
  [SMALL_STATE(65)] = 2742,
  [SMALL_STATE(66)] = 2769,
  [SMALL_STATE(67)] = 2796,
  [SMALL_STATE(68)] = 2823,
  [SMALL_STATE(69)] = 2850,
  [SMALL_STATE(70)] = 2877,
  [SMALL_STATE(71)] = 2904,
  [SMALL_STATE(72)] = 2931,
  [SMALL_STATE(73)] = 2958,
  [SMALL_STATE(74)] = 2985,
  [SMALL_STATE(75)] = 3012,
  [SMALL_STATE(76)] = 3039,
  [SMALL_STATE(77)] = 3082,
  [SMALL_STATE(78)] = 3109,
  [SMALL_STATE(79)] = 3136,
  [SMALL_STATE(80)] = 3164,
  [SMALL_STATE(81)] = 3206,
  [SMALL_STATE(82)] = 3234,
  [SMALL_STATE(83)] = 3259,
  [SMALL_STATE(84)] = 3300,
  [SMALL_STATE(85)] = 3341,
  [SMALL_STATE(86)] = 3366,
  [SMALL_STATE(87)] = 3391,
  [SMALL_STATE(88)] = 3416,
  [SMALL_STATE(89)] = 3453,
  [SMALL_STATE(90)] = 3478,
  [SMALL_STATE(91)] = 3503,
  [SMALL_STATE(92)] = 3528,
  [SMALL_STATE(93)] = 3553,
  [SMALL_STATE(94)] = 3578,
  [SMALL_STATE(95)] = 3615,
  [SMALL_STATE(96)] = 3656,
  [SMALL_STATE(97)] = 3697,
  [SMALL_STATE(98)] = 3725,
  [SMALL_STATE(99)] = 3753,
  [SMALL_STATE(100)] = 3791,
  [SMALL_STATE(101)] = 3819,
  [SMALL_STATE(102)] = 3847,
  [SMALL_STATE(103)] = 3885,
  [SMALL_STATE(104)] = 3920,
  [SMALL_STATE(105)] = 3955,
  [SMALL_STATE(106)] = 3990,
  [SMALL_STATE(107)] = 4025,
  [SMALL_STATE(108)] = 4060,
  [SMALL_STATE(109)] = 4095,
  [SMALL_STATE(110)] = 4130,
  [SMALL_STATE(111)] = 4165,
  [SMALL_STATE(112)] = 4200,
  [SMALL_STATE(113)] = 4235,
  [SMALL_STATE(114)] = 4270,
  [SMALL_STATE(115)] = 4305,
  [SMALL_STATE(116)] = 4340,
  [SMALL_STATE(117)] = 4375,
  [SMALL_STATE(118)] = 4410,
  [SMALL_STATE(119)] = 4445,
  [SMALL_STATE(120)] = 4480,
  [SMALL_STATE(121)] = 4515,
  [SMALL_STATE(122)] = 4542,
  [SMALL_STATE(123)] = 4566,
  [SMALL_STATE(124)] = 4588,
  [SMALL_STATE(125)] = 4610,
  [SMALL_STATE(126)] = 4634,
  [SMALL_STATE(127)] = 4656,
  [SMALL_STATE(128)] = 4678,
  [SMALL_STATE(129)] = 4700,
  [SMALL_STATE(130)] = 4722,
  [SMALL_STATE(131)] = 4744,
  [SMALL_STATE(132)] = 4766,
  [SMALL_STATE(133)] = 4810,
  [SMALL_STATE(134)] = 4836,
  [SMALL_STATE(135)] = 4858,
  [SMALL_STATE(136)] = 4880,
  [SMALL_STATE(137)] = 4902,
  [SMALL_STATE(138)] = 4946,
  [SMALL_STATE(139)] = 4968,
  [SMALL_STATE(140)] = 4990,
  [SMALL_STATE(141)] = 5016,
  [SMALL_STATE(142)] = 5038,
  [SMALL_STATE(143)] = 5060,
  [SMALL_STATE(144)] = 5082,
  [SMALL_STATE(145)] = 5104,
  [SMALL_STATE(146)] = 5128,
  [SMALL_STATE(147)] = 5150,
  [SMALL_STATE(148)] = 5176,
  [SMALL_STATE(149)] = 5200,
  [SMALL_STATE(150)] = 5239,
  [SMALL_STATE(151)] = 5264,
  [SMALL_STATE(152)] = 5303,
  [SMALL_STATE(153)] = 5329,
  [SMALL_STATE(154)] = 5355,
  [SMALL_STATE(155)] = 5375,
  [SMALL_STATE(156)] = 5413,
  [SMALL_STATE(157)] = 5439,
  [SMALL_STATE(158)] = 5465,
  [SMALL_STATE(159)] = 5491,
  [SMALL_STATE(160)] = 5517,
  [SMALL_STATE(161)] = 5539,
  [SMALL_STATE(162)] = 5561,
  [SMALL_STATE(163)] = 5587,
  [SMALL_STATE(164)] = 5613,
  [SMALL_STATE(165)] = 5632,
  [SMALL_STATE(166)] = 5651,
  [SMALL_STATE(167)] = 5670,
  [SMALL_STATE(168)] = 5689,
  [SMALL_STATE(169)] = 5708,
  [SMALL_STATE(170)] = 5727,
  [SMALL_STATE(171)] = 5746,
  [SMALL_STATE(172)] = 5765,
  [SMALL_STATE(173)] = 5787,
  [SMALL_STATE(174)] = 5806,
  [SMALL_STATE(175)] = 5825,
  [SMALL_STATE(176)] = 5849,
  [SMALL_STATE(177)] = 5865,
  [SMALL_STATE(178)] = 5881,
  [SMALL_STATE(179)] = 5897,
  [SMALL_STATE(180)] = 5921,
  [SMALL_STATE(181)] = 5937,
  [SMALL_STATE(182)] = 5953,
  [SMALL_STATE(183)] = 5969,
  [SMALL_STATE(184)] = 5991,
  [SMALL_STATE(185)] = 6013,
  [SMALL_STATE(186)] = 6029,
  [SMALL_STATE(187)] = 6045,
  [SMALL_STATE(188)] = 6061,
  [SMALL_STATE(189)] = 6077,
  [SMALL_STATE(190)] = 6099,
  [SMALL_STATE(191)] = 6121,
  [SMALL_STATE(192)] = 6143,
  [SMALL_STATE(193)] = 6159,
  [SMALL_STATE(194)] = 6180,
  [SMALL_STATE(195)] = 6193,
  [SMALL_STATE(196)] = 6206,
  [SMALL_STATE(197)] = 6219,
  [SMALL_STATE(198)] = 6240,
  [SMALL_STATE(199)] = 6253,
  [SMALL_STATE(200)] = 6266,
  [SMALL_STATE(201)] = 6279,
  [SMALL_STATE(202)] = 6295,
  [SMALL_STATE(203)] = 6315,
  [SMALL_STATE(204)] = 6335,
  [SMALL_STATE(205)] = 6355,
  [SMALL_STATE(206)] = 6369,
  [SMALL_STATE(207)] = 6385,
  [SMALL_STATE(208)] = 6401,
  [SMALL_STATE(209)] = 6417,
  [SMALL_STATE(210)] = 6433,
  [SMALL_STATE(211)] = 6451,
  [SMALL_STATE(212)] = 6467,
  [SMALL_STATE(213)] = 6485,
  [SMALL_STATE(214)] = 6505,
  [SMALL_STATE(215)] = 6521,
  [SMALL_STATE(216)] = 6536,
  [SMALL_STATE(217)] = 6553,
  [SMALL_STATE(218)] = 6568,
  [SMALL_STATE(219)] = 6585,
  [SMALL_STATE(220)] = 6596,
  [SMALL_STATE(221)] = 6607,
  [SMALL_STATE(222)] = 6622,
  [SMALL_STATE(223)] = 6637,
  [SMALL_STATE(224)] = 6648,
  [SMALL_STATE(225)] = 6661,
  [SMALL_STATE(226)] = 6676,
  [SMALL_STATE(227)] = 6691,
  [SMALL_STATE(228)] = 6702,
  [SMALL_STATE(229)] = 6717,
  [SMALL_STATE(230)] = 6731,
  [SMALL_STATE(231)] = 6745,
  [SMALL_STATE(232)] = 6759,
  [SMALL_STATE(233)] = 6773,
  [SMALL_STATE(234)] = 6787,
  [SMALL_STATE(235)] = 6801,
  [SMALL_STATE(236)] = 6813,
  [SMALL_STATE(237)] = 6827,
  [SMALL_STATE(238)] = 6841,
  [SMALL_STATE(239)] = 6852,
  [SMALL_STATE(240)] = 6863,
  [SMALL_STATE(241)] = 6874,
  [SMALL_STATE(242)] = 6885,
  [SMALL_STATE(243)] = 6896,
  [SMALL_STATE(244)] = 6907,
  [SMALL_STATE(245)] = 6918,
  [SMALL_STATE(246)] = 6929,
  [SMALL_STATE(247)] = 6940,
  [SMALL_STATE(248)] = 6951,
  [SMALL_STATE(249)] = 6959,
  [SMALL_STATE(250)] = 6967,
  [SMALL_STATE(251)] = 6975,
  [SMALL_STATE(252)] = 6983,
  [SMALL_STATE(253)] = 6991,
  [SMALL_STATE(254)] = 6999,
  [SMALL_STATE(255)] = 7007,
  [SMALL_STATE(256)] = 7015,
  [SMALL_STATE(257)] = 7023,
  [SMALL_STATE(258)] = 7031,
  [SMALL_STATE(259)] = 7039,
  [SMALL_STATE(260)] = 7047,
  [SMALL_STATE(261)] = 7055,
  [SMALL_STATE(262)] = 7063,
  [SMALL_STATE(263)] = 7071,
  [SMALL_STATE(264)] = 7079,
  [SMALL_STATE(265)] = 7087,
  [SMALL_STATE(266)] = 7095,
  [SMALL_STATE(267)] = 7103,
  [SMALL_STATE(268)] = 7111,
  [SMALL_STATE(269)] = 7119,
  [SMALL_STATE(270)] = 7127,
  [SMALL_STATE(271)] = 7135,
  [SMALL_STATE(272)] = 7143,
  [SMALL_STATE(273)] = 7151,
  [SMALL_STATE(274)] = 7159,
  [SMALL_STATE(275)] = 7167,
  [SMALL_STATE(276)] = 7175,
  [SMALL_STATE(277)] = 7183,
  [SMALL_STATE(278)] = 7191,
  [SMALL_STATE(279)] = 7199,
  [SMALL_STATE(280)] = 7207,
  [SMALL_STATE(281)] = 7215,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(113),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(159),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(116),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(229),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(254),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(152),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(132),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(143),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(271),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(263),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(269),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(256),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(259),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(140),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(107),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(118),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(162),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(119),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(232),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(274),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(156),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(132),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(143),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(271),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(263),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(269),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(256),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(259),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(147),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(109),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 3, .production_id = 14),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, .production_id = 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(117),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(261),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(111),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(101),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(79),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(81),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(45),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(101),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 4, .production_id = 14),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 3),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 2),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4, .production_id = 13),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 4, .production_id = 13),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 3),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 3),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 4),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 4),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 4),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supports_statement, 3),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supports_statement, 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 14),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, .production_id = 14),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(261),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(111),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(121),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(79),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(81),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(45),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(121),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, .production_id = 14),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, .production_id = 14),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5, .production_id = 14),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, .production_id = 14),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 5),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset_statement, 3),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_statement, 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 2),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 2),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_set, 2),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 3),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 3),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 10),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 10),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 4),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 4),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 3),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 3),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 10),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 10),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2, .production_id = 4),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 2, .production_id = 4),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 6, .production_id = 15),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 6, .production_id = 15),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 3, .production_id = 9),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 3, .production_id = 9),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 1),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 4),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 4),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 2),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 2),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 5, .production_id = 9),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 5, .production_id = 9),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge_selector, 2),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_merge_selector, 2),
  [678] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(105),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 11),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 11),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 3, .production_id = 10),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 3, .production_id = 10),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal_selector, 1),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universal_selector, 1),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 3, .production_id = 12),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 3, .production_id = 12),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descendant_selector, 3),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descendant_selector, 3),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 4, .production_id = 15),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 4, .production_id = 15),
  [705] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(104),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 3),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 3),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [748] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(241),
  [751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(239),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, .production_id = 16),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, .production_id = 3),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [814] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(158),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2),
  [819] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(102),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [832] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(19),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 2),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [849] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2), SHIFT_REPEAT(12),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 5, .production_id = 14),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [876] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge_attribute, 2),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_css_external_scanner_create(void);
void tree_sitter_css_external_scanner_destroy(void *);
bool tree_sitter_css_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_css_external_scanner_serialize(void *, char *);
void tree_sitter_css_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_css(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_css_external_scanner_create,
      tree_sitter_css_external_scanner_destroy,
      tree_sitter_css_external_scanner_scan,
      tree_sitter_css_external_scanner_serialize,
      tree_sitter_css_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
