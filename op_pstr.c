#include "monty.h"

/**
 * op_pstr - prints the string starting at the top
 * of the stack, followed by a new line.
 * @stack: stack_t
 * @line_number: int
 *
 * Return: void
 */
void op_pstr(stack_t **stack, unsigned int line_number
			 __attribute__((unused)))
{
	stack_t *node;

	node = (*stack);
	while (node != NULL)
	{
		if (!(node->n >= 1 && node->n <= 127))
			break;
		printf("%c", (char)node->n);
		node = node->next;
	}
	printf("\n");
}
