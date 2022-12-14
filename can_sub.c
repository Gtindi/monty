#include "monty.h"

/**
 * can_sub - Checks if sub operation can be done
 * @op_code: string
 * @stack: stack_t
 * @lineno: int
 *
 * Return: int
 */
int can_sub(char *op_code, stack_t **stack, int lineno)
{
	if (strcmp(op_code, "sub") == 0)
	{
		if (stack == NULL || (*stack) == NULL || (*stack)->next == NULL)
		{
			print_errors(3, "L", _itoa(lineno), ": can't sub, stack too short\n");
			exit(EXIT_FAILURE);
		}
		return (1);
	}
	return (0);
}
