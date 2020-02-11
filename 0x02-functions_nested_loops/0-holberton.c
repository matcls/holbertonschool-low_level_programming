#include "holberton.h"

/**
 * main - entry point
 *
 * Description:  prints Holberton, followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	int i;
	char h[] = "Holberton";

	for (i = 0; i < 9; i++)
		{
		_putchar(h[i]);
		}
		_putchar('\n');
	return (0);
}
