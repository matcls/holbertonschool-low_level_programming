#include "holberton.h"

/**
 * print_chessboard - prints the chessboard
 *
 * @a: second array
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int row, filler;

	for (row = 0; row < 8; row++)
	{
		for (filler = 0; filler < 8; filler++)
		{
			_putchar(a[row][filler]);
		}
		_putchar('\n');
	}
}
