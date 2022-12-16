#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c: The charecter of interest
 *
 * Return: 1 if isupper else 0
 */
int _isupper(int c)
{
	int result = isupper(c); /* call builtin isupper function*/

	if (result != 0)
		return (1);
	else
		return (0);
}
