#include "main.h"

/**
 * print_alphabet - Prints all aphabets in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c = 'a'; /*Define character variable c*/

	while (c <= 'z')
	{
		_putchar(c);
	}
	_putchar('\n');
}
