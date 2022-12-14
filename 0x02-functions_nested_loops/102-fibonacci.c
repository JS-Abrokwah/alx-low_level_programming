#include <stdio.h>

/**
 * main - program starts here
 * Description: computes and print the first 50 fibonacci series
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 0;
	long int x = 0, y = 1, z;

	while (i < 50)
	{
		z = x + y;
		x = y;
		y = z;
		printf("%ld", z);

		if (i < 49)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');
	return (0);
}
