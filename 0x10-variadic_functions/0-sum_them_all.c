#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters
 * @n: number of  parameters
 *
 * Return: the sum of all its parameters . If n eq 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i, sum;

	i = 0, sum = 0;

	va_start(numbers, n);
	while (i++ < n)
		sum += va_arg(numbers, int);
	va_end(numbers);
	return (sum);
}
