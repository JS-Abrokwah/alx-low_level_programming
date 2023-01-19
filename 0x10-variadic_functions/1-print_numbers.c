#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print all optional arguments
 * @separator: separator string
 * @n: number of optional arguments
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list ap;

	if (n == 0)
		return;

	va_start(ap, n);

	for (index = 0; index < n; index++)
	{
		if (index == n - 1)
		{
			printf("%d", va_arg(ap, int));
			printf("\n");
		}
		else
		{
			printf("%d", va_arg(ap, int));
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(ap);
}
