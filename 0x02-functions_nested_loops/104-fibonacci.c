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
	int i, o1, o2; /*Is a better way to declare and assig variables?*/
	long int a, b, f, p1, p2, o3;

	a = 1;
	b = 2;
	o1 = o2 = 1;
	printf("%ld, %ld", a, b);
	for (i = 0; i < 96; i++) /* print fibonacci numbers  before overflow */
	{
		if (o1)
		{
			f = a + b;
			printf(", %ld", f);
			a = b;
			b = f;
		}
		else /* we go for overflow */
		{
			if (o2)
			{
				p1 = a % 1000000000;
				p2 = b % 1000000000;
				a = a / 1000000000;
				b = b / 1000000000;
				o2 = 0;
			}
			o3 = p1 + p2;
			f = a + b + (o3 / 1000000000);
			printf(", %ld", f);
			printf("%ld", o3 % 1000000000);
			a = b;
			p1 = p2;
			b = f;
			p2 = (o3 % 1000000000);
		}
		if (((a + b) < 0) && o1 == 1)
			o1 = 0;
	}
	printf("\n");
	return (0);
}
