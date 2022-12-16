#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9
 *
 * Return ; void
 */
void print_most_numbers(void)
{
	int i = 48;/*initialize i*/

	while (i < 58)
	{
		if (i == 50 || i == 52)
		{
			i++;
			continue;
		}
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
