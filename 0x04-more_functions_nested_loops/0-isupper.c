#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c: The charecter of interest
 *
 * Return: 1 if isupper else 0
 */
int _isupper(int c)
{
	int letter = c; /*assign c to a local variable*/
	int result = isupper(letter); /* call builtin isupper function*/

	if (result == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
