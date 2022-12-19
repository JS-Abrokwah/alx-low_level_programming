#include "main.h"
#include <stdio.h>

/**
 * print_array - print n number of array elements
 * @a: the array to be used
 * @n: the number of elements to be printed
 *
 * Reaturn: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == (n - 1))
		{
			printf("%d\n", *(a + i));
			i++;
			continue;
		}
		printf("%d, ", *(a + i));
		i++;
	}
}
