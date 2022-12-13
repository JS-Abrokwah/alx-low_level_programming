#include "main.h"

/**
 * _islower - Checks whether a character is lower case
 * @c: takes int parameter c, the character to be checked
 *
 * Return: 0 if char is not lower, non-zero if chare is lower
 */
int _islower(int c)
{
	/*int c is aninteger argument */
	int result = islower(c);

	if (result != 0)
		return (1);
	else
		return (0);
}
