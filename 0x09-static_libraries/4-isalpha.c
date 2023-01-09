#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Checks whether a character is alphabet
 * @c: takes int parameter c, the character to be checked
 *
 * Return: 0 if char is not alphabet, non-zero if chare is alphabet
 */
int _isalpha(int c)
{
	char letter = (char) c;
	int result = isalpha(letter);

	if (result != 0)
		return (1);
	else
		return (0);
}
