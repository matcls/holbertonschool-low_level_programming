#include "holberton.h"

/**
 * _strncpy - copies a string
 * @dest: destination
 * @src:  source
 * @n:    number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *runner = dest;

	while (*src && n)
	{
		*runner++ = *src++;
		n--;
	}
	while (n--)
		*runner++ = 0;

	return (dest);
}
