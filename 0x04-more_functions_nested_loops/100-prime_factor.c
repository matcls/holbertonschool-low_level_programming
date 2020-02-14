#include <stdio.h>

/**
 *main - entry point
 *
 * Description:  finds and prints the largest prime factor
 * of the number 612852475143
 *
 * Return: 0
 */

int main(void)
{
	long number, finder;

	number = 612852475143;

	for (finder = 2; number > finder; finder++)
	{
		while (number % finder == 0)
		{
			number /= finder;
		}
	}
	printf("%lu", finder);
	putchar('\n');
	return (0);
}
