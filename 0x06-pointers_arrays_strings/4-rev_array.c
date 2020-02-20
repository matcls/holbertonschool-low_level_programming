#include "holberton.h"

/**
 * reverse_array - reverse the content of array of integers
 *
 * @a: pointer to the array
 * @n: number of elements of the array
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int first, last, save;

	for (first = 0, last = n - 1; last - first > 0; first++, last--)
	{
		save = *(a + first);
		*(a + first) = *(a + last);
		*(a + last) = save;
	}
}
