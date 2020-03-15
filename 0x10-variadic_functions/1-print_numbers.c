	#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @n: number of integers passed to the function
 * @separator: string to be printed between numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	i = 0;
	va_start(numbers, n);
	while (i++ < n)
	{
		printf("%d", va_arg(numbers, int));
		if (i < n && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
