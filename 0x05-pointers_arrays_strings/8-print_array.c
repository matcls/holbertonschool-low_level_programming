#include "holberton.h"
#include <stdio.h>

/**
 * print_array -  prints n elements of an array of integers,
 * followed by a new line
 *
 * @a: array
 * @n: number of elements of the array
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	if (a)
	{
		while (n > 0)
		{
		printf("%d", *a++);
		if (--n)
		/* funny things about printf */
		printf("%c%c", 44, 32);
		}
	}
	printf("%c", 10);
}
