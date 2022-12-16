#include "main.h"

/**
 * print_square - print a square shape with #
 * @size: the length of the square to be printed
 *
 * Return: void
 */
void print_square(int size)
{
	int i = 0;
	int j = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < size)
		{
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
			j = 0;
		}
	}
}
