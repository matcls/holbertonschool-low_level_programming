#include "holberton.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements of the array
 * @size:  bytes for each elements
 *
 * The _calloc function allocates memory for an array of nmemb elements of size
 * bytes each and returns a pointer to the allocated memory.
 * The memory is set to zero
 *
 * Return: If nmemb or size is 0, then returns NULL
 * If malloc fails, then returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int filler;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);

	if (!array)
		return (NULL);

	for (filler = 0; filler < (nmemb * size); filler++)
		array[filler] = 0;

	return (array);
}
