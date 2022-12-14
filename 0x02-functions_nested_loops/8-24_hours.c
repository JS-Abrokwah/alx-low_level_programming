#include "main.h"

/**
 * jack_bauer - Prints every minutes in 24 hours
 *
 * Return: void
 */
void jack_bauer(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	while (a <= 2 && b <= 9)
	{
		while (c <= 5 && d <= 9)
		{
			_putchar('0' + a);
			_putchar('0' + b);
			_putchar(':');
			_putchar('0' + c);
			_putchar('0' + d);
			_putchar('\n');
			if (d == 9 && c == 5)
			{
				c = 0;
				d = 0;
				break;
			}
			else if (d == 9 && c <= 5)
			{
				c++;
				d = 0;
			}
			else
				d++;
		}
		if (a == 2 && b == 3)
			break;
		else if (b == 9 && a <= 2)
		{
			a++;
			b = 0;
		}
		else
			b++;
	}
}
