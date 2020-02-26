#include "holberton.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 *
 * @x: base number
 * @y: power number
 *
 * Return: x raised to y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	return (y > 0 ? x * _pow_recursion(x, y - 1) : 1);
}
