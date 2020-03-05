#include "holberton.h"

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: arguments matrix
 *
 * If the number of arguments is incorrect, print Error, followed by a new line
 * and exit with a status of 98 . num1 and num2 should only be composed
 * of digits. If not, print Error, followed by a new line, and exit with a
 * status of 98
 *
 * Return: 0
 */


int main(int argc, char *argv[])
{
	long int mul;
	long int num1;
	long int num2;
	long int i;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 0; argv[1][i]; i++)
		if (!isdigit(argv[1][i]))
		{
			printf("Error\n");
			exit(98);
		}

	for (i = 0; argv[2][i]; i++)
		if (!isdigit(argv[2][i]))
		{
			printf("Error\n");
			exit(98);
		}

	num1 = atol(argv[1]);
	num2 = atol(argv[2]);

	/*working in a solution for big numbers*/
	mul = num1 * num2;

	printf("%ld\n", mul);

	return (0);
}
