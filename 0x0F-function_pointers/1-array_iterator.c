#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array:  given array
 * @size:   size of array
 * @action: pointer to function that prints each element of the array
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		while (size--)
			action(*array++);
	}
}
