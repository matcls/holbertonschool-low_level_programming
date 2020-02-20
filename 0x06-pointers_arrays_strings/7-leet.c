#include "holberton.h"

/**
 * leet - encodes a string into 1337
 *
 * @n: input value
 *
 * Return: n value
 */

char *leet(char *n)
{
	int i, j;
	char  origin[] = "aAeEoOtTlL";
	char master[] = "4433007711";

	for (i = 0; *(n + i); i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (*(n + i) == *(origin + j))
			*(n + i) = *(master + j);
		}
	}
	return (n);
}
