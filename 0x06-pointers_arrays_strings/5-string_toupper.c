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
		if (*(s + index) >= 97 && *(s + index) <= 122)
		{
			*(s + index) = *(s + index) - 32;
		}

		index++;
	}
	return (s);
}
