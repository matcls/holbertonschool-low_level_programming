#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers
 *
 * @a:    matrix of integers
 * @size: matrix size
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int index, sum0 = 0, sum1 = 0;
	/* accessing diagonal values trough continuos memory spaces */
	for (index = 0;  index < size; index++)
		sum0 += a[(size + 1) * index];
	for (index =  0; index < size; index++)
		sum1 += a[(size - 1) * (index + 1)];
	printf("%d, %d\n",  sum0, sum1);

}
