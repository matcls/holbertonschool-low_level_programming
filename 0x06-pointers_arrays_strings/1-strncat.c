#include "holberton.h"

/**
 * _strncat -  concatenates two strings.
 *
 * @dest:  initial string
 * @src:   string to append to dest
 * @n:     number of bytes to copy
 * Return: a pointer to the resulting string dest
 */


char *_strncat(char *dest, char *src, int n)
{
	char *runner = dest;

	while (*runner)
		runner++;
	while (*src && n--)
		*runner++ = *src++;
	*runner = 0;
	return (dest);
}
