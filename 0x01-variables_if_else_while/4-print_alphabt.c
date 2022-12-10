#include <stdio.h>
#include <ctype.h>

/**
 * main - Program starts here
 *
 * Return: Always 0
 */
int main(void)
{
	char c = 'a'; /*Declare a chara variable*/

	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
		{
			c++;
			continue;
		}
		putchar(tolower(c));
		c++;
	}
	putchar('\n');
	return (0);
}
