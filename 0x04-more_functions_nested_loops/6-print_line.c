#include "main.h"

/**
 * print_line - print underscores as lines
 * @n: number of times _ is printed
 *
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 1;

		while (i <= n)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
