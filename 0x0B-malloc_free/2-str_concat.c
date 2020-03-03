#include "holberton.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2:  second string
 * Description:  description
 *
 * Return: a pointer to a newly allocated space in memory which contains
 * the contents of s1, followed by the contents of s2, and null terminated.
 * NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	int length_s1 = 0, length_s2 = 0;
	char *str;

	while (s1 && *s1++)
		length_s1++;
	while (s2 && *s2++)
		length_s2++;
	str = malloc((length_s1 + length_s2 + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str += length_s1 + length_s2;

	for (s2--; length_s2--;)
		*--str = *--s2;
	for (s1--; length_s1--;)
		*--str = *--s1;
	return (str);
}
