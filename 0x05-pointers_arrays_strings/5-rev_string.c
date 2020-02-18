#include "holberton.h"

/**
 * rev_string - reverses a string
 *
 * @s:  string
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	char *r = s;

	if (s)
	{
		while (*r)
			r++;

		while (s < --r)
		{
			*s ^= *r;
			*r ^= *s;
			*s ^= *r;
			s++;
		}
	}
}
