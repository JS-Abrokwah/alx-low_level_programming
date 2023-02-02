#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: binary input
 *
 * Return: the converted unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, pow2 = 1;
	int len;

	if (b == '\0')
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		num += (b[len] - '0') * pow2;
		pow2 *= 2;
	}

	return (num);
}
