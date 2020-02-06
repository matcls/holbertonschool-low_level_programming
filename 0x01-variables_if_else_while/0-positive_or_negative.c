#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - entry point
*
* Description: Compare a random number and say 
* if it is negatie, positive or 0
*
* Return: 0
*/

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
		if (n > 0)
		{
			printf("%d is positive\n", n);
		}
		else
			printf("%d is zero\n", n);
	
	return (0);
}
