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
	char a;

	for (a = 'a'; a <= 'z'; ++a)
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
