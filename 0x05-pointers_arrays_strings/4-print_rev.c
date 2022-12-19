#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev -prints a string
 * @s: the string to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = strlen(s) - 1;

	while (len >= 0)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar('\n');
}
