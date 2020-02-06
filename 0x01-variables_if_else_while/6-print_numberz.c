#include <stdio.h>

/**
* main - entry point
*
* Description: prints all single digit numbers of base 10
* starting from 0
*
* Return: 0
*/

int main(void)
{
	int zt;

	for (zt = 0; zt < 10; zt++)
	{
		putchar((zt % 10) + '0');
	}
	putchar('\n');
	return (0);
}
