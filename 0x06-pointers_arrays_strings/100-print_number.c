#include "holberton.h"

/**
 * print_number - entry point
 *
 * Description:  prints an integer.
 *
 * @n: input
 *
 * Return: 0
 */

void print_number(int n)
{
	unsigned int a, b, c, d;

	if (n < 0)
	{
		_putchar(45);
		a = n * -1;
	}
	else
		a = n;

	b = a;
	c = 1;

	while (b > 9)
	{
		b = b / 10;
		c = c * 10;
	}

	for (; c >= 1; c = c / 10)
	{
		d = (a / c) % 10;
		_putchar(d + '0');
	}
}