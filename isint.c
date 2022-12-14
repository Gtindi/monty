#include "monty.h"

/**
 * isint - Checks if a string is an integer
 * @str: The string
 *
 * Return: 1 if true, 0 otherwise
 */
int isint(char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);
	if (str[0] == '-')
		i = 1;

	for (; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}
