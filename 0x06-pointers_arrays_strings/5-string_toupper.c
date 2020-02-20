#include "holberton.h"

/**
 * string_toupper - function that changes all lowercase letters of a string to
 * uppercase.
 *
 * @s:  string
 *
 * Return: uppercase letter.
 */

char *string_toupper(char *s)
{
	int index = 0;

	while (*(s + index))
	{
		if ((*s >= 97) && (*s <= 122))
		{
			*s = *s - 32;
		}

		index++;
	}
	return (s);
}
