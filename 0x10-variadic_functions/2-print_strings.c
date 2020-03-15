#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *string;
	unsigned int i;

	va_start(strings, n);
	i = 0;
	while (i++ < n)
	{
		string = va_arg(strings, char *);
		if (string)
			printf("%s", string);
		else
			printf("(nil)");
		if (i < n && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
