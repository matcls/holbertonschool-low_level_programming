#include "holberton.h"

/**
 * _isalpha - entry point
 *
 * @c: input
 *
 * Description:  checks for alphabetic character
 *
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	return (1);
	else
	return (0);
}

