#include "monty.h"

/**
 * op_rotl - rotates the stack to the top.
 * @stack: stack_t
 * @line_number: int
 *
 * Return: void
 */
void op_rotl(stack_t **stack, unsigned int line_number
			 __attribute__((unused)))
{
	stack_t *head, *tail, *temp;

	head = (*stack);
	tail = head;
	if (head == NULL)
		return;
	while (tail->next != NULL)
		tail = tail->next;
	tail->next = head;
	temp = head->next;
	head->next = NULL;
	head->prev = tail;
	head = temp;
	(*stack) = head;
}
