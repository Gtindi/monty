#include "monty.h"

/**
 * op_pop - Pops the last item in the stack
 * @stack: stack_t
 * @line_number: int
 *
 * Return: void
 */
void op_pop(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *head;

	if (stack == NULL)
		return;
	head = (*stack);
	(*stack) = head->next;
	if (*stack)
		(*stack)->prev = NULL;
	free(head);
}
