#include "main.h"

/**
 * main - Program starts here
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();

	return (0);
}

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
