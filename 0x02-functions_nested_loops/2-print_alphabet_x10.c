#include "main.h"

/**
 * print_alphabet_x10 - Prints all aphabets in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0; /*Define int variable i*/

	while (i < 10)
	{
		char c = 'a'; /*Define character variable c*/

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
