#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * isNum - function that checks if whole string is a digit.
 *
 * @str: string to check.
 *
 * Return: 1 if is a digit, 0 if it is not.
 */

int isNum(const char *str)
{
	while (*str)
	{
		if (*str < 48 || *str > 57)
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - adds positive numbers
 *
 * @argc:  The number of command line arguments
 * @argv:  An array of size argc
 *
 * Return: 1 if one of the number contains symbols that are not digits
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (isNum(argv[i]))
			sum = sum + atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}

