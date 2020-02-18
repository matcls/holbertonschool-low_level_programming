#include "holberton.h"

/**
 * swap_int -  swaps the values of two integers.
 *
 * @a: first pointer to an integer
 * @b: second pointer to an integer
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	/* check if null wowowo */
	if (a && b)
	{
		*a ^= *b;
		*b ^= *a;
		*a ^= *b;
	}
}

