#include "holberton.h"


/**
 * string_nconcat - concatenates two strings
 * @s1:    first string
 * @s2:    second string
 * @n:     number of caracters from s2 to concatenate
 *
 * The returned pointer should point to a newly allocated space in memory which
 * contains the contents of s1, followed by the first n bytes of s2, and null
 * terminated
 * f n is greater or equal to the length of s2 then use the entire string s2
 * If NULL is passed, treat it as an empty string
 *
 * Return: a pointer to a newly array in memory or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length_s1 = 0, length_s2 = 0;
	char *str, *str_n;

	while (s1[length_s1])
		length_s1++;
	while (s2[length_s2])
		length_s2++;

	if (length_s2 > n)
	length_s2 = n;

	str_n = str = malloc((length_s1 + length_s2 + 1) * sizeof(char));

	if (!str)
		return (NULL);

	while (*s1)
		*str++ = *s1++;
	while (length_s2--)
		*str++ = *s2++;
	*str = 0;
	return (str_n);
}
