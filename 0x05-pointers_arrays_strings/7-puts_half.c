#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: the string parameter
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int n;

	if (len % 2 == 0)
		n = len / 2;
	else
		n = ((len - 1) / 2) + 1;

	while (n < len)
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
