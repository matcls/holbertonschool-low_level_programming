#include <stdio.h>

/**
* main - entry point
*
* Description: Prints the alphabet
* but e q.
*
* Return: 0
*/

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
			a++;
		}
	}
	putchar('\n');
	return (0);
}
