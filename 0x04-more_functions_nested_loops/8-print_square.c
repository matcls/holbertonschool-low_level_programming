#include "holberton.h"

/**
 * print_square -  prints a square, followed by a new line
 *
 * @size: size for the square
 *
 * Return: 0
 */

void print_square(int size)
{
	int row, filler;

	if (size <= 0)
		_putchar('\n');

	for (row = 0; row < size; row++)
	{
		for (filler = 0; filler < size; filler++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
