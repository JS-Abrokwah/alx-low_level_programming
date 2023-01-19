#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all the arguments
 * @n: number of arguments
 *
 * Return: the sum of the arguments as int
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int index;
	int sum = 0;
	va_list argp;

	if (n == 0)
		return (0);

	va_start(argp, n);
	for (index = 0; index < n; index++)
	{
		sum += va_arg(argp, int);
	}
	va_end(argp);

	return (sum);
}
