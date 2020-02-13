#include "holberton.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 *
 * @size: triangle size
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int base, high;

	if (size >= 0)
	{
		_putchar('\n');
	}

	for (base = 1; base <= size; base++)
	{
		for (high = 1; high <= size; high++)
		{
			if (high <= size - base)
			{
				_putchar(32);
			}
			else
			{
				_putchar(35);
			}
		}
		_putchar('\n');

	}
}
