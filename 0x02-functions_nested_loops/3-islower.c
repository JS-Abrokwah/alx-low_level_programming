#include "main.h"
#include <ctype.h>

/**
 * _islower - Checks whether a character is lower case
 * @c: takes int parameter c, the character to be checked
 *
 * Return: 0 if char is not lower, non-zero if chare is lower
 */
int _islower(int c)
{
	char letter = (char) c;
	int result = islower(letter);

	if (result != 0)
		return (1);
	else
		return (0);
}
