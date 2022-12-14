#include "monty.h"

/**
 * can_pchar - Checks if pchar operation can be done
 * @op_code: string
 * @stack: stack_t
 * @lineno: int
 *
 * Return: int
 */
int can_pchar(char *op_code, stack_t **stack, int lineno)
{
	if (strcmp(op_code, "pchar") == 0)
	{
		if (stack == NULL || (*stack) == NULL)
		{
			print_errors(3, "L", _itoa(lineno), ": can't pchar, stack empty\n");
			exit(EXIT_FAILURE);
		}

		if (!((*stack)->n >= 0 && (*stack)->n <= 127))
		{
			print_errors(3, "L", _itoa(lineno), ": can't pchar, value out of range\n");
			exit(EXIT_FAILURE);
		}
		return (1);
	}
	return (0);
}
