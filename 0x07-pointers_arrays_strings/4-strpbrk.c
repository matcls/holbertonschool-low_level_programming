#include "holberton.h"


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


/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s:      pointer to the string
 * @accept: pointer to bytes to match in s
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	while (s++)
	{
		if (_strchr(accept, *s))
			return ((char *) s);
	}
	return (NULL);
}
