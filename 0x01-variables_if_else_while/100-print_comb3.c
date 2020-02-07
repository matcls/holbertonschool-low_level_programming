#include <stdio.h>

/**
* main - entry point
*
* Description:  prints all possible different combinations of two digits.
*
* Return: 0
*/

int main(void)
{
	int u, t;

	for (t = 48; t <= 57; t++)
	{
		for (u = 48; u <= 57; u++)
		{
			if (t < u)
		{
			putchar(t);
			putchar(u);
			/*
			*Another approach
			*/
			if (t + u != 113)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	}
	putchar('\n');

	return (0);
}
