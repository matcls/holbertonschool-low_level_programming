#include "holberton.h"

/**
 * _isupper - checks for uppercase characte
 *
 * @result: value returned if is or not uppercase
 * @c: input to be evaluated
 *
 * Return: if uppercase 1 otherwise 0
 */

int _isupper(int c)
{
	int result;
	/*Checks from A to Z*/
	if (c >= 65 && c <= 90)
	{
		result = 1;
		return (result);
	}
	else
	return (0);
}

