#include "holberton.h"
/* included in holberton.h
* #define NULL 0
*/

/**
 * _strchr - locates a character in a string.
 *
 * @s: pointer to the string
 * @c: character to be located
 *
 * Return: a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}

