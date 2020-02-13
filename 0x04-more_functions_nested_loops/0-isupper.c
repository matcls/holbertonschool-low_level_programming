#include "holberton.h"

/**
 * _isupper - checks for uppercase characte
 *
 * @c: input to be evaluated
 *
 * Return: if uppercase 1 otherwise 0
 */

int _isupper(int c)
{
	/*Checks from A to Z*/
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
