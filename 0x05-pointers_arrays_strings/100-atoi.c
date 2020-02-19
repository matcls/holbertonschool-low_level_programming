#include "holberton.h"

/**
 * _atoi - convert a string to an integer.
 *
 * @s:  string
 *
 * Return: an integer from s or 0 if is not a number
 */

int _atoi(char *s)
{
	unsigned int runner, minus, num, letter, retrieved;

	runner = num = minus = letter = retrieved = 0;

	while (s)
	{
		if (s[runner] == 45)
			minus += 1;
		if (s[runner] >= 48 && s[runner] <= 57)
		{
			retrieved = retrieved * 10 + (s[runner] - 48);
			num = 1;
		}
		if (!(s[runner] >= 48 && s[runner] <= 57))
		{
			if (num == 1)
				letter = 1;
		}
		if (letter == 1)
			break;
		runner++;
	}
	if (minus % 2 != 0)
		retrieved = -retrieved;
	return (retrieved);
}

