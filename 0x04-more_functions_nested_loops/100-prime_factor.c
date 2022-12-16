#include <stdio.h>
#include <stdlib.h>

/**
 * main - print largest prime factor
 *
 * Return: Always 0;
 */
int main(void)
{
	unsigned long n;
	unsigned long div = 2;
	unsigned long maxFact;

	n = 612852475143;
	while (n != 0)
	{
		if (n % div != 0)
			div = div + 1;
		else
		{
			maxFact = n;
			n = n / div;
			if (n == 1)
			{
				printf("%lu", maxFact);
				break;
			}
		}
	}
	printf("\n");
	return (0);
}
