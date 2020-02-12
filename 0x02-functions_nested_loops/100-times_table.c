#include "holberton.h"


/**
 * print_times_table - entry point
 *
 * Description:  prints the n times table, starting with 0.
 *
 * @n: input.
 */

void print_times_table(int n)
{
	int i, j, t;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				t = i * j;
				_putchar(44);
				_putchar(32);
				/*using <= for better understanding*/
				if (t <= 9)
				{
					_putchar(32);
					_putchar(32);
					/*better ascii that +'0' */
					_putchar(t + 48);
				}
				else if (t <= 99)
				{
					_putchar(32);
					_putchar((t / 10) + 48);
					_putchar((t % 10) + 48);
				}
				else
				{
					_putchar(((t / 100) % 10) + 48);
					_putchar(((t / 10) % 10) + 48);
					_putchar((t % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
