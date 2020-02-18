#include "holberton.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line
 *
 * @str: string
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	if (str)
	{
		while (*str)
		{
			if (*str)
				_putchar(*str++);
				/* *str++; */
			str++;
		}
	}
	_putchar('\n');
}

