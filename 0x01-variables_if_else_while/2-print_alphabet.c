#include <stdio.h>

/**
* main - entry point
*
* Description: Prints the alphabet
* in lowercase.
*
* Return: 0
*/

int main(void)
{
	char a;

	while (a <= 'z')
	{
		putchar(a);
		putchar('\n');
		a++;
	}
	return (0);
}
