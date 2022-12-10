#include <stdio.h>
#include <ctype.h>

/**
 * main - Programs starts here
 *
 * Return: Always 0
 */
int main(void)
{
	char c = 'A'; /*Declare and init a char variable*/

	while (c <= 'Z')
	{
		putchar(tolower(c));
		c++;
	}
	c = 'A'; /*Reassign variable c*/
	while (c <= 'Z')
	{
		putchar(toupper(c));
		c++;
	}
	putchar('\n');
	return (0);
}
