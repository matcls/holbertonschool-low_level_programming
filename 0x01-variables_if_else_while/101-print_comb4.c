#include <stdio.h>

/**
* main - entry point
*
* Description:  prints all possible different combinations of three digits.
*
* Return: 0
*/

int main(void)
{
	int u, t, h;

	for (h = 48; h <= 55; h++)
	{
		for (u = h + 1; u <= 57; u++)
		{
			for (t = u + 1; t <= 57; t++)
			{
				putchar(h);
				putchar(u);
				putchar(t);
				/*
				*Another approach
				*/
				if  (h < 55 || u < 56 || t < 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
