#include "monty.h"

/**
 * print_errors - Write msg to standard error output
 * @n: The total number of arguments
 */
void print_errors(int n, ...)
{
	int i;
	char *msg;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		msg = va_arg(ap, char *);
		write(STDERR_FILENO, msg, strlen(msg));
	}
}
