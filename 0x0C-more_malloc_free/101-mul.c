#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"

int main(int argc, char *argv[])
{
	long int mul;
	long int num1;
	long int num2;
	long int plus;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (plus = 0; argv[1][plus]; plus++)
		if (!isdigit(argv[1][plus]))
		{
			printf("Error\n");
			exit(98);
		}

	for (plus = 0; argv[2][plus]; plus++)
		if (!isdigit(argv[2][plus]))
		{
			printf("Error\n");
			exit(98);
		}

	num1 = atol(argv[1]);
	num2 = atol(argv[2]);
	mul = num1 * num2;

	printf("%ld\n", mul);

	return (0);
}