#include "variadic_functions.h"
#include <stdio.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_str(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - prints only char type
 * @arg: list of arguments
 *
 * Return: void
 */
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_int - prints only integer types
 * @arg: list of arguments
 *
 * Return: void
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_float - prints only float type
 * @arg: list of arguments
 *
 * Return: void
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_str - prints only char * types
 * @arg: list of arguments
 *
 * Return: void
 */
void print_str(va_list arg)
{
	if (va_arg(arg, char *) == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", va_arg(arg, char *));
}


/**
 * print_all - prints all arguments regardless of the type
 * @format: formart of arguments to be printed
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int x = 0, y = 0;
	char *separator = "";
	print_type printer_funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str}
	};

	va_start(args, format);

	while (format && (*(format + x)))
	{
		y = 0;

		while (y < 4 && (*(format + x) != *(printer_funcs[y].symb)))
			y++;

		if (y < 4)
		{
			printf("%s", separator);
			printer_funcs[y].func(args);
			separator = ", ";
		}

		x++;
	}

	printf("\n");

	va_end(args);
}
