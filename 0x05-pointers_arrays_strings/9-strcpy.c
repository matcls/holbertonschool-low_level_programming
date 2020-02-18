#include "holberton.h"

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 *
 * @src:  source string array
 * @dest: destiny for src array
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int position;

	/* cicle until null */
	for (position = 0; src[position]; position++)
		dest[position] = src[position];
	/* including the null byte in the end */
	dest[position] = '\0';
	return (dest);
}
