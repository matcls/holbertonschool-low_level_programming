#include "3-calc.h"
#include "function_pointers.h"

/**
 * main - p1rints the result of the operation, followed by a new line
 * @argc: the number of args
 * @argv: array of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int (*operator)(int, int);
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	operator = get_op_func(argv[2]);
	if (!operator)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", operator(a, b));
	return (0);
}
