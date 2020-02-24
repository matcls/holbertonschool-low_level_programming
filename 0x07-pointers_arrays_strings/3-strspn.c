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
 * _strspn - gets the length of a prefix substring (characters in s and accept)
 *
 * @s:      pointer to the string
 * @accept: pointer to bytes to search in s
 *
 * Return: he number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */


unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	while (*s && _strchr(accept, *s))
	{
		s++;
		i++;
	}
	return (i);

}
