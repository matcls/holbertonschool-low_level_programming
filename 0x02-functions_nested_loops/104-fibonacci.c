#include <stdio.h>

/**
 * main - entry point
 *
 * Description:  finds and prints the first 98 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int i;
	/*Is a better way to declare and assig variables?*/
	float a, b, f;

	a = 1;
	b = 2;

	printf("%.0f, %.0f", a, b);
	for (i = 0; i < 96; i++)
	{
		f = a + b;
		a = b;
		b = f;
		printf(", %.0f", f);
	}
	printf("\n");

	return (0);
}
