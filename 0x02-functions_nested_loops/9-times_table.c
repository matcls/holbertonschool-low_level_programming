#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Description:
 *
 * Return: 0
 */

void times_table(void)
{
	int n, x, r;

	for (n = 0; n < 10; n++)
	{
		_putchar(48);

		for (x = 1; x < 10; x++)
		{
			_putchar(44);
			_putchar(32);

			r = n * x;

			if (r < 10)
				_putchar(32);
			else
				_putchar((r / 10) + '0');

			_putchar((r % 10) + '0');
		}
		_putchar('\n');
	}
}
