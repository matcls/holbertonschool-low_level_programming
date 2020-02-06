#include <stdio.h>

/**
* main - entry point
*
* Description: prints all the numbers of base 16 in lowercase
*
* Return: 0
*/

int main(void)
{
		int n;
		/*testing with character encoding*/
		for (n = 48; n <= 57; n++)
		putchar(n);

		for (n = 'a'; n <= 'f'; n++)
		putchar(n);

		putchar('\n');

	return (0);
}
