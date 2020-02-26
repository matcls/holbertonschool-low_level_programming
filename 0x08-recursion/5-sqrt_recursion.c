#include "holberton.h"

/**
 * sqrt_n - finds natural square root
 *
 * @n: given number to obtain root of
 * @root: natural square root of n
 *
 * Return: natural square root of or -1 otherwise
 */

int sqrt_n(int n, int root)
{
	if (root * root == n)
		return (root);
	if (root * root > n)
		return (-1);
	return (sqrt_n(n, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: given number to obtain root of
 *
 * Return: returns the natural square root of a number.
 * If n does not have a natural square root, return -1
 */

int _sqrt_recursion(int n)
{
	return (sqrt_n(n, 0));
}

