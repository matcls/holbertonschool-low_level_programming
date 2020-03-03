#include "holberton.h"

/**
 * _strdup - allocates a new space in memory, which contains
 * a copy of the string given as a parameter.
 * @str: string to be copied
 *
 * Return: a pointer to a new string which is a duplicate of the string str
 */
char *_strdup(char *str)
{
	char *cpy;
	unsigned int size = 0;

	if (str)
	{
		while (str[size++])
			continue;

		cpy = malloc(size * sizeof(char));
		if (cpy)
		{
			while (size--)
				cpy[size] = str[size];
			return (cpy);
		}
	}
	return (NULL);
}

