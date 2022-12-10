#include <stdio.h>

/**
 * main - Program starts here
 *
 * Return: Always 0
 */
int main(void)
{
	int c = 48; /*Declare an int variable*/

	while (c <= 57)
	{
		putchar(c);
		if (c == 57)
		{
			c++;
			continue;
		}
		putchar(44);
		putchar(32);
		c++;
	}
	putchar('\n');
	return (0);
}
