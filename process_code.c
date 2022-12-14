#include "monty.h"

/**
 * process_code - Process a given bytecode
 * @stack: The current stack
 * @b_code: The bytecode to be processed
 * @lineno: The current line being interpreted
 *
 * Return: void
 */
void process_code(stack_t **stack, char *b_code, int lineno)
{
	int arg;
	parser_t *parsed;
	void (*op)(stack_t **stack, unsigned int line_number) = NULL;

	parsed = parser(b_code);
	if (parsed != NULL)
	{
		op = get_op_func(parsed->data);
		if (op == NULL)
		{
			print_errors(5, "L", _itoa(lineno), ": unknown instruction ",
						 parsed->data, "\n");
			exit(EXIT_FAILURE);
		}
		arg = 0;
		if (can_push(parsed->data, parsed->next, lineno))
			arg = atoi(parsed->next->data);
		can_pint(parsed->data, stack, lineno);
		can_pop(parsed->data, stack, lineno);
		can_swap(parsed->data, stack, lineno);
		can_add(parsed->data, stack, lineno);
		can_sub(parsed->data, stack, lineno);
		can_div(parsed->data, stack, lineno);
		can_mul(parsed->data, stack, lineno);
		can_mod(parsed->data, stack, lineno);
		can_pchar(parsed->data, stack, lineno);
		op(stack, arg);
	}
	free_parsed(parsed);
}
