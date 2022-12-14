#include "monty.h"
int mode = 0;

/**
 * main - Entry point
 * @argc: The argument count
 * @argv: The argument list
 *
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE otherwise
 */
int main(int argc, char **argv)
{
	char *filename;
	char *b_code;
	stack_t *stack = NULL;
	int status = 1, lineno = 1;

	if (argc != 2)
	{
		print_errors(1, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	filename = argv[1];
	status = read_byte_codes(filename, &b_code);
	while (status == 1)
	{
		if (!is_comment(b_code))
			process_code(&stack, b_code, lineno);
		free(b_code);
		status = read_byte_codes(NULL, &b_code);
		++lineno;
	}
	free(b_code);
	free_stack(stack);
	return (0);
}
