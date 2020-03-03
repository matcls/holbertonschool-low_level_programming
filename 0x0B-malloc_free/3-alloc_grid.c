#include "holberton.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width:  the width of the array
 * @height: the height of the array
 *
 * Return: returns a pointer to a 2 dimensional array of integers.
 * NULL on failure or if width or height is 0 or negative.
 */
int **alloc_grid(int width, int height)
{
	int **row, **ret;

	if (width <= 0 || height <= 0)
		return (NULL);
	ret = row = malloc(height * sizeof(int *));
	if (!row)
		return (NULL);
	while (height--)
	{
		int *col = malloc(width * sizeof(int));
		int i = width;

		if (!col)
		{
			i = 0;
			while (ret + i != row)
				free(ret[i++]);
			free(ret);
			return (NULL);
		}
		while (i--)
			*col++ = 0;
		*row++ = col - width;
	}
	return (ret);
}
