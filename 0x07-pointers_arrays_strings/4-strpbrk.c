#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be scanned
 * @accept: string of bytes to search
 *
 * Return: pointer to bytes in s
 */
char *_strpbrk(char *s, char *accept)
{
	char *result;

	result = strpbrk(s, accept);
	return (result);
}
