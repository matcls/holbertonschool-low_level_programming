#include <stdio.h>
#include "holberton.h"

/**
 *main - entry point
 *
 * Description:  prints the numbers from 1 to 100, followed by a new line.
 * But for multiples of three print Fizz instead of the number and for the
 * multiples of five print Buzz. For numbers which are multiples of both
 * three and five print FizzBuzz.
 *
 * Return: 0
 */

int main(void)
{
	char *f;
	int n;
	char m[4];

	for (n = 1; n <= 99; n++)
	{
		sprintf(m, "%d", n);
		f = (n  % 3 == 0) ? (n  % 5 == 0) ? "FizzBuzz" : "Fizz" :
			(n  % 5 == 0) ? "Buzz" : m;
		printf("%s ", f);
	}
	printf("Buzz");
	printf("\n");
	return (0);
}

