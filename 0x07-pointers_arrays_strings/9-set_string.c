#include "holberton.h"

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s:  memory address from pointer to change
 * @to: pointer to match
 *
 * Return: nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}