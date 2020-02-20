#include "holberton.h"

/**
 * _strcat -  appends the src string to the dest string, overwriting the
 * terminating null byte (\0) at the end of dest, and then adds a terminating
 * null byte
 *
 * @dest:  initial string
 * @src:   string to append to dest
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *runner = dest;

	while (*runner)
		runner++;
	while (*src)
		*runner++ = *src++;
	*runner = 0;

	return (dest);
}
