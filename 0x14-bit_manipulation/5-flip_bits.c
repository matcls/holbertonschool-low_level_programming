#include "holberton.h"

/**
 * flip_bits - gets the number of bits you would need to flip
 * to get from one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: returns the number of bits you would need to flip
 * to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	n = n ^ m;

	while (n)
	{
		count += n & 1;
		n >>= 1;
	}
	return (count);
}
