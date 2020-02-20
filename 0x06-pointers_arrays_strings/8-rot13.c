#include "holberton.h"

/**
 * rot13 - encodes a string in rot13
 *
 * @s: string
 *
 * Return: encoded string
 */

char *rot13(char *s)
{
	int origin, master;
	char origin_[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char master_[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (origin = 0; s[origin]; origin++)
	{
		for (master = 0; origin_[master]; master++)
		{
			if (s[origin] == origin_[master])
			{
				s[origin] = master_
					[master];
				break;
			}
		}
	}
	return (s);
}
