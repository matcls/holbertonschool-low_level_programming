#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - entry point
*
* Description: Prints the las digit
* from the variable n.
*
* Return: 0
*/

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;
	if (lastd == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	else
		if (lastd < 6)
		{
			printf("Last digit of %d is %d an is less than 6 and not 0\n", n, lastd);
		}
	else
		if (lastd > 5)
		{
			printf("Last digit of %d is %d an is greater than 5\n", n, lastd);
		}
	return (0);
}
