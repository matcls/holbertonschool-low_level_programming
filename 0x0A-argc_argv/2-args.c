#include <stdio.h>

/**
 * main - .prints all arguments it receives.
 *
 * @argc:  The number of command line arguments
 * @argv:  An array of size argc
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count;

	if (argc >= 0)
	{
		for (count = 0; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	return (0);
}

