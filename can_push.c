#include "monty.h"

/**
 * can_push - Checks if push operation can be done
 * @op_code: string
 * @arg: parser_t
 * @lineno: int
 *
 * Return: int
 */
int can_push(char *op_code, parser_t *arg, int lineno)
{
	if (strcmp(op_code, "push") == 0)
	{
		if (arg == NULL || isint(arg->data) == 0)
		{
			print_errors(3, "L", _itoa(lineno), ": usage: push integer\n");
			exit(EXIT_FAILURE);
		}
		return (1);
	}
	return (0);
}
