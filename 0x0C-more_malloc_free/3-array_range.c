#include "holberton.h"

/**
 * array_range - creates an array of integers
 * @
 *
 * The array created should contain all the values from min (included)
 * to max (included), ordered from min to max
 *
 * Return: a pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *array, filler;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (filler = 0; min <= max; filler++, min++)
		array[filler] = min;
	return (array);
}
