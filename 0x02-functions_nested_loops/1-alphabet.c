#include "holberton.h"

/**
 * print_alphabet - entry point
 *
 * Description: prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: 0
 */

void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}

	_putchar('\n');
}
