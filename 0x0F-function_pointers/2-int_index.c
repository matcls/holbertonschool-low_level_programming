#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: given array
 * @size:  array size
 * @cmp:   pointer to function to be used to compare values
 *
 * Return: nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(*(array + i)))
				return (i);
			i++;
		}
	return (-1);
}
