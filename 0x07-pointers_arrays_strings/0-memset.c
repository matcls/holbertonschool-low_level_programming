#include "holberton.h"

/**
 * _memset - fills the first n bytes of the memory area pointed
 * to by s with the constant byte b
 *
 * @s: a pointer to memory area to be filled
 * @b: constant to be used to fill the memory area
 * @n: number of bytes of memory to be filled
 *
 * Return:  a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	/* better to use a while here */
	for (; n; n--)
	{
		*(s + n) = b;
	}
	return (s);
}

