#include "holberton.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: an integer less than, equal to, or greater than zero if s1 is found,
 * respectively to be less than, to match, or be greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	int cmp;

	while (*s1 && *s2)
	{
		cmp = *s1++ - *s2++;
		if (cmp == 0)
			continue;
		else
			break;
	}

	return (cmp);
}
