#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * cap_string - Capitalize all words in a string.
 * @str: input string
 *
 * Return: char pointer
 */
char *cap_string(char *str)
{
	if (str == NULL || str[0] == '\0' || str[1] == '\0')
	{
		return (str);
	}
	else if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	for (int i = 1; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
		}
		if (str[i] == ',' || str[i] == ';' || str[i] == '.')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
		}
		if (str[i] == '!' || str[i] == '?' || str[i] == '"')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
		}
		if (str[i] == '(' || str[i] == ')' || str[i] == '{')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
		}
		if (str[i] == '}')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
		}
	}
	return (str);
}
