#include "main.h"

/**
 * swap_int - swwaps the values of two integers
 * @a: first parameter
 * @b: second parameter
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
