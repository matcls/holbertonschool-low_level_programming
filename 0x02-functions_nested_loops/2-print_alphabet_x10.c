#include "holberton.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Description: prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int a;
	int t;

	for (t = 0; t < 10; t++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}

