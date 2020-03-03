#include "holberton.h"

/**
 * create_array -  creates an array of chars,
 * and initializes it with a specific char
 * @size: the size of the array
 * @c:    the character to initialize the array
 *
 * Return: NULL if size = 0 or a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size * sizeof(char));

	if (!size || array == NULL)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
}
