#include "main.h"

/**
 * print_to_98 - Prints numbers from n to 98
 * @n: The offset number as a parameter
 *
 * Return: void
 */
void print_to_98(int n)
{
	while (n >= 98 || n <= 98)
	{
		_putchar('0' + n);
		_putchar(',');
		_putchar(' ');
		if (n < 98)
			n++;
		else if (n > 98)
			n--;
		else
			break;
	}
}