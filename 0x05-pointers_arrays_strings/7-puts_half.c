#include "holberton.h"

/**
 * puts_half - prints the second half of the string
 *
 * @str:  string
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int length;

	for (length = 0; *(str + length); length++)
		continue;
	for (str += (length + 1) / 2; *str; str++)
		_putchar(*str);
	_putchar('\n');
}
