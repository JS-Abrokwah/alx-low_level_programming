#include <stdio.h>
#include <ctype.h>

/**
 * main - Program starts here
 *
 * Return: Always 0
 */
int main(void)
{
	char c = 'z'; /*Declare a chara variable*/

	while (c >= 'a')
	{
		putchar(tolower(c));
		c--;
	}
	putchar('\n');
	return (0);
}
