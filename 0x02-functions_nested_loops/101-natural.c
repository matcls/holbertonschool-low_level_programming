#include <stdio.h>

/**
 * main - entry point
 *
 * Description:  prints the sum of all the multiples of 3 or 5
 * below 1024 (excluded)
 *
 *
 * Return: 0
 *
 */

int main(void)
{
	int s;
	int i;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			s += i;
			/*what option should use for better clarity*/
			/*s = s +i;*/
		}
	}
	/*Better add empty lines for readibility?*/
	printf("%d\n", s);
	return (0);
}
