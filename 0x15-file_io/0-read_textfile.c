#include "main.h"

/**
 * read_textfile - Reads a textfile and prints to std out
 * @filename: the file to read from
 * @letters: the number of letters to read
 *
 * Return: number of letters read or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	if (op == -1 || rd == -1 || wr == -1 || rd != wr)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(op);

	return (wr);
}
