#include "main.h"
#include <string.h>

/**
 * rev_string - reverse a string
 * @s: the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	int j = strlen(s) - 1;
	char tmp;

	while (i < j)
	{
		tmp = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = tmp;
		i++;
		j--;
	}
}
