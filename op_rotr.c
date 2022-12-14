#include "monty.h"

/**
 * op_rotr - rotates the stack to the bottom.
 * @stack: stack_t
 * @line_number: int
 *
 * Return: void
 */
void op_rotr(stack_t **stack, unsigned int line_number
			 __attribute__((unused)))
{
	stack_t *head, *tail, *temp;

	head = (*stack);
	tail = head;
	if (head == NULL)
		return;
	while (tail->next != NULL)
		tail = tail->next;
	if (head != tail)
	{
		temp = tail->prev;
		tail->next = head;
		tail->prev = NULL;
		head->prev = tail;
		temp->next = NULL;
	}

	head = tail;
	(*stack) = head;
}
