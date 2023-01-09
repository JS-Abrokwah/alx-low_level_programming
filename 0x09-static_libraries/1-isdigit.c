#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: the digit to check
 *
 * Return: 1 if c is digit else 0
 */
int _isdigit(int c)
{
	int num = isdigit(c);/*assign returned value to num*/

	if (num != 0)
		return (1);
	else
		return (0);
}
