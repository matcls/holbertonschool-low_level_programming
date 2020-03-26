#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: The bit value to set
 * @index: Te index, starting from 0 of the bit to get
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n &= ~(1 << index);
	return ((index > sizeof(n) * 8) ? -1 : 1);
}
