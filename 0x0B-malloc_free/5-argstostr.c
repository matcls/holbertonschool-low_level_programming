#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments.
 * Each argument should be followed by a \n in the new string
 * @ac: number of arguments
 * @av: arguments
 *
 * Return: NULL if ac == 0 or av == NULL
 * a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, length = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			length++;
	length += ac;
	str = malloc(length + 1 * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] ; j++)
			str[k++] = av[i][j];
		str[k++] = '\n';
	}
	return (str);
}

