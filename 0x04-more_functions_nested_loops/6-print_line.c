#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: input
 *
 * Return: 0
 */

void print_line(int n)
{
	int i;

	if (n > -1)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
