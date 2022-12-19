#include "main.h"
#include <string.h>

/**
 * puts2 - prints even order character
 * @str: a string parameter
 *
 * Return: void
 */
void puts2(char *str)
{
	int len = strlen(str);
	int i = 0;

	while (i < len)
	{
		_putchar(*(str + i));
		i += 2;
	}
	_putchar('\n');
}
