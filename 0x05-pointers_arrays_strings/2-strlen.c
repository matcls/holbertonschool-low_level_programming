#include "holberton.h"

/**
 * _strlen  -  returns the length of a string.
 *
 * @s: given string
 *
 * Return: String length
 */

int _strlen(char *s)
{
	int length = 0;

	if (*s)
	{
		while (*(s + length))
		++length;
	}

	return (length);
}
