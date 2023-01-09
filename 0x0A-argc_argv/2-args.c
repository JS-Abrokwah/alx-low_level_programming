#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all runtime arguments
 * @argc: argument count
 * @argv: array of runtime arguments
 *
 * Return: Always 0 success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
