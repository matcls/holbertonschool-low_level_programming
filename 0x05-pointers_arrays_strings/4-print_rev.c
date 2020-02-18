#include "holberton.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s:  string
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	/* r for reverse */
	char *r = s;

	if (s)
	{
		/* less braces */
		while (*r)
			r++;
		while (s < r--)
			_putchar(*r);
		_putchar('\n');
	}
}
