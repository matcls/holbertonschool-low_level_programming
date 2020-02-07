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
	int u, t;

	for (u = 0; u <= 99; u++)
	{
		for (t = 0; t <= 99; t++)
		{
				if  (u < t)
				{
					putchar(u / 10 + '0');
					putchar(u % 10 + '0');
					putchar(32);
					putchar(t / 10 + '0');
					putchar(t % 10 + '0');
					if (u != 98)
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
