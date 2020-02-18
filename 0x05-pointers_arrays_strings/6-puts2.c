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
	do {
		if (*str)
			_putchar(*str++);
	} while (*str++);
		_putchar('\n');
}

