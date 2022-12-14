#include "monty.h"

/**
 * op_mod - computes the rest of the division of the second top
 * element of the stack by the top element of the stack.
 * @stack: stack_t
 * @line_number: int
 *
 * Return: void
 */
void op_mod(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *top;
	stack_t *second;

	if (stack == NULL)
		return;
	top = (*stack);
	second = top->next;
	second->n = second->n % top->n;
	second->prev = NULL;
	free(top);
	(*stack) = second;
}
