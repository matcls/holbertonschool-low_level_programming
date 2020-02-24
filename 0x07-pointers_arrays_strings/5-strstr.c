#include "holberton.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: pointer to the string
 * @needle:   pointer to the string to search in haystack
 *
 * Return:  a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int runner;

	while (*haystack)
	{
		for (runner = 0; *(needle + runner); runner++)
			if (*(needle + runner) != *(haystack + runner))
				break;
		if (!*(needle + runner))
			return (haystack);
		haystack++;
	}
	return (NULL);
}

