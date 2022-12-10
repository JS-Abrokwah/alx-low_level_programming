#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program start execution from here
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int tmp; /*This is a temporal variable*/

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	tmp = n % 10;
	if (tmp > 5)
		printf("Last digit of %d is %d and is greater that 5\n", n, tmp);
	else if (tmp < 6 && tmp != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, tmp);
	else if (tmp == 0)
		printf("Last digit of %d is %d and is 0\n", n, tmp);
	return (0);
}
