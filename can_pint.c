#include "monty.h"

/**
 * can_pint - Checks if pint operation can be done
 * @op_code: string
 * @stack: stack_t
 * @lineno: int
 *
 * Return: int
 */
int can_pint(char *op_code, stack_t **stack, int lineno)
{
	if (strcmp(op_code, "pint") == 0)
	{
		if (stack == NULL || (*stack) == NULL)
		{
			print_errors(3, "L", _itoa(lineno), ": can't pint, stack empty\n");
			exit(EXIT_FAILURE);
		}
		return (1);
	}
	return (0);
}
