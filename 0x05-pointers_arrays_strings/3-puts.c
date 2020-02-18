#include "holberton.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 *
 * @str: string
 *
 * Return: nothing
 */

void _puts(char *str)
{
	if (str)
	{
		while (*str)
			_putchar(*str++);
		_putchar('\n');
	}
}
