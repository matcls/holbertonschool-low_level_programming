#include "3-calc.h"
#include "function_pointers.h"
/**
 * op_add - add two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplay two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the multiplication of a by b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide two numbers
 * @a: dividend
 * @b: divisor
 *
 * Return: the division of a by b or Error if the divisor is 0
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - add two numbers
 * @a: dividend
 * @b: divisor
 *
 * Return: the remainder of the division of a by b or Error if the divisor is 0
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
