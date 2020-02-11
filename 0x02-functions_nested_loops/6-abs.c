#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: input.
 *
 * Return: The absolute value of the integern or -n.
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
