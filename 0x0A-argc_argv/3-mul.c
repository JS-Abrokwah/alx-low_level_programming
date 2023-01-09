#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two runtime arguments
 * @argc: argument count
 * @argv: array of runtime arguments
 *
 * Return: Always 0, success
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
