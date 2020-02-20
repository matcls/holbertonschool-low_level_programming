#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string.
 *
 * @str:  string to be capitalized.
 *
 * Return: pointer to the changed string.
 */
char *cap_string(char *str)
{
	int index = 0;

	/* less confusing with this notation */
	while (str[index])
	{
		while (!(str[index] >= 97 && str[index] <= 122))
			index++;

		if (str[index - 1] == 32 ||
		    str[index - 1] == 34 ||
		    str[index - 1] == 10 ||
		    str[index - 1] == 33 ||
		    str[index - 1] == 59 ||
		    str[index - 1] == 46 ||
		    str[index - 1] == 44 ||
		    str[index - 1] == 9 ||
		    str[index - 1] == 44 ||
		    str[index - 1] == 59 ||
		    str[index - 1] == 63 ||
		    str[index - 1] == 40 ||
		    str[index - 1] == 41 ||
		    str[index - 1] == 123 ||
		    str[index - 1] == 125 ||
		    index == 0)
		str[index] -= 32;

		index++;
	}

	return (str);
}

