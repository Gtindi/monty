#include "monty.h"

/**
 * parser - Parses a given line of byte code into operand and
 * arguments
 * @b_code: The byte code to be parsed
 *
 * Return: a pointer
 */
parser_t *parser(char *b_code)
{
	parser_t *parsed = NULL;
	parser_t *node, *prev;
	char *token;

	token = strtok(b_code, " ");
	while (token != NULL)
	{
		node = malloc(sizeof(parser_t));
		mem_error_check(node);
		node->data = token;
		node->next = NULL;
		token = strtok(NULL, " ");
		if (parsed == NULL)
		{
			parsed = node;
			prev = node;
			continue;
		}
		prev->next = node;
		prev = node;
	}
	return (parsed);
}
