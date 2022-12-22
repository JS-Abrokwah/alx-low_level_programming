#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * string_toupper - changes lowercase letters to uppercase
 * @str: a pointer to a string
 *
 * Return: pointer to the transformed string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (i < strlen(str))
	{
		if (islower(str[i]) != 0)
		{
			str[i] = toupper(str[i]);
		}
		i++;
	}
	return (str);
}
