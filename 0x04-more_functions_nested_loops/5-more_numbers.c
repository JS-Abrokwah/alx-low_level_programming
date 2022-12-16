#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int a = 0;
	int b = 0;
	int c = 48;
	int d = 48;

	while (a < 10)
	{
		while (b < 15)
		{
			if (b <= 9)
			{
				d = 0;
			}
			else if (b > 9)
			{
				c = 49;
			}
			if (b == 10)
			{
				d = 48;
			}
			_putchar(c);
			_putchar(d);
			b++;
			c++;
			d++;
		}
		_putchar('\n');
		a++;
		b = 0;
		c = 48;
		d = 48;
	}
}
