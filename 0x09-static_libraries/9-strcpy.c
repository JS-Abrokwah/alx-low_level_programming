#include "main.h"
#include <string.h>

/**
 * _strcpy -copies a string from source to dist
 * @dest: the destination string
 * @src: the source string
 *
 * Return: char pointer
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
