#include <stdio.h>

/**
 * main - entry point
 *
 * Description:  prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long a = 1, b = 2, f = 0;

	printf("%ld, %ld", a, b);
	for (i = 1; i < 49; i++)
	{
		f = a + b;
		a = b;
		b = f;
		printf(", %ld", f);
	}

	printf("\n");
	return (0);
}

