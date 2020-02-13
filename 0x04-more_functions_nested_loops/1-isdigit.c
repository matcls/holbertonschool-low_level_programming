#include "holberton.h"

/**
* _isdigit - checks for a digit (0 through 9).
*
* @c:  input to check
*
* Return: if is a digit 1 otherwise 0
*/

int _isdigit(int c)
{
	int result;
	/*Checks from 0 to 9*/
	if (c >= 48 && c <= 57)
	{
		result = 1;
		return (result);
	}
	else
	return (0);
}
