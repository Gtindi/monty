#include "monty.h"

/**
 * is_comment - Checks if a byte_code is a comment
 * @b_code: string
 *
 * Return: 1 on success, 0 otherwise
 */
int is_comment(char *b_code)
{
	int i = 0;

	while (b_code[i] == ' ' && b_code[i] != '\0')
		i++;
	if (b_code[i] == '#')
		return (1);
	return (0);
}
