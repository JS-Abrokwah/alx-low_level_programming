#include "main.h"

/**
 * print_triangle - print a triangle shape with #
 * @size: the length of the triangle to be printed
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i = 1;
	int j = size;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= size)
		{
			while (j > 0)
			{
				if (j > i)
				{
					_putchar(' ');
					j--;
				}
				else
				{
					_putchar('#');
					j--;
				}
			}
			_putchar('\n');
			i++;
			j = size;
		}
	}
}
