#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: Integer parameter
 *
 * Return: absolute of the last digit of n
 */
int print_last_digit(int n)
{
	int num = abs(n % 10);

	_putchar('0' + num);
	return (num);
}
