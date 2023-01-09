#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory space
 * @b: value to be filled
 * @n: number of bytes to be filled
 *
 * Return: pointer to memory block
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *str;

	str = memset(s, b, n);
	return (str);
}
