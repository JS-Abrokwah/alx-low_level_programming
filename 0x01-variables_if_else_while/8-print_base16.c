#include <stdio.h>
#include <ctype.h>

/**
 * main - Programs starts here
 *
 * Return: Always 0
 */
int main(void)
{
	int c = 48; /*Declare and init a int variable*/

	while (c <= 57)
	{
		putchar(c);
		c++;
	}
	c = 97; /*Reassign variable c*/
	while (c <= 102)
	{
		putchar(tolower(c));
		c++;
	}
	putchar('\n');
	return (0);
}
