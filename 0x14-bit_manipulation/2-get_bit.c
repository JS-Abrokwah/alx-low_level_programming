#include "main.h"

/**
 * get_bit - returns the value of a bit as unsigned int
 * @n: the number from which the bit is to be found
 * @index: The index of the bit
 *
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int k;
	int val;

	if (index == 0)
	{
		val = n % 2;
	}
	else
	{
		for (k = 0; k < index; k++)
			n = n >> 1;

		val = n % 2;
	}

	if (val == 0 || val == 1)
		return (val);
	else
		return (-1);
}
