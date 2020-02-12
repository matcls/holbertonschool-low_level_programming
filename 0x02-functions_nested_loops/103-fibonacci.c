#include <stdio.h>

/**
 * main - entry point
 *
 * Description:  finds and prints the sum of the even-valued terms
 *
 * Return: 0
 */

int main(void)
{
	long f1 = 1;
	long f2 = 2;
	long s;
	long t = 0;
	long i;

	/* found that the 33 fibonacci is before 4 million*/
	for (i = 0; i < 33; i++)
	{
		s = f1 + f2;
		if (f2 % 2 == 0)
		{
			t = t + f2;
		}
		f1 = f2;
		f2 = s;
	}

	printf("%ld\n", t);

	return (0);
}
