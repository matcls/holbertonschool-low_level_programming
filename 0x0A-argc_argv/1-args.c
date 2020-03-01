#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 *
 * @argc:  The number of command line arguments
 * @argv:  An array of size argc
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{

	if (argc >= 0)
		printf("%d\n", argc - 1);
	else
		argv = argv;
	return (0);
}
