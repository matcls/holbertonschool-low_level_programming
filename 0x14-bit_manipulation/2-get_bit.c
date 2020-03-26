#include "holberton.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The bit value to get
 * @index: Te index, starting from 0 of the bit to get
 *
 * Return: The value of bit at index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((index < (sizeof(n) * 4)) ? (int)(n >> index) & 1 : -1);
}
