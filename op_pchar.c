#include "monty.h"

/**
 * op_pchar - prints the char at the top of the stack,
 * followed by a new line.
 * @stack: stack_t
 * @line_number: int
 *
 * Return: void
 */
void op_pchar(stack_t **stack, unsigned int line_number
			  __attribute__((unused)))
{
	stack_t *node;

	node = (*stack);
	printf("%c\n", (char)node->n);
}
