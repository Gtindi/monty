#include "monty.h"

/**
 * read_byte_codes - Reads bytecodes line by line from a given
 * file. The first call must have the filename, in subsequent
 * calls filename should be NULL.
 * @filename: The path to the file
 * @b_code: The byte code read
 *
 * Return: number of bytes read on success, -1 on failure,
 * 0 on EOF
 */
int read_byte_codes(char *filename, char **b_code)
{
	static int fd;
	int status;
	size_t len, i = 0;
	char buffer[1];

	if (filename != NULL)
	{
		fd = open(filename, O_RDONLY);
		if (fd == -1)
		{
			print_errors(3, "Error: Can't open file ", filename, "\n");
			exit(EXIT_FAILURE);
		}
	}
	(*b_code) = malloc(sizeof(char) * MAX_READ_SIZE);
	if (*b_code == NULL)
	{
		print_errors(1, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	status = read(fd, buffer, 1);
	len = MAX_READ_SIZE;
	while (status != -1 && status != 0 && buffer[0] != '\n')
	{
		(*b_code)[i] = buffer[0];
		(*b_code)[++i] = '\0';
		status = read(fd, buffer, 1);
		if (strlen(*b_code) == len)
		{
			(*b_code) = _realloc(*b_code, len, len + MAX_READ_SIZE);
			len = len + MAX_READ_SIZE;
		}
	}
	return (status);
}
