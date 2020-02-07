#include <stdio.h>

/**
* main - entry point
*
* Description: prints the numbers from 00 to 99.
*
* Return: 0
*/

int main(void)
{
	/*
	*declare two variables at same time
	*units and tens
	*/
	int u, t;

	for (t = 48; t <= 57; t++)
	{
		for (u = 48; u <= 57; u++)
		{
		putchar(t);
		putchar(u);
		if (!(t == 57 && u == 57))
		{
			putchar(44);
			putchar(32);
		}
	}
	}
	putchar('\n');
	return (0);
}
