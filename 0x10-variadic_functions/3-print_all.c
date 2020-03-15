#include "variadic_functions.h"

/**
 * print_char - print a char
 * @c: char
 */
void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_integer - print an integer
 * @i: integer
 */
void print_integer(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_float - print a float
 * @f: float
 */
void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_string - print a string
 * @s: string
 */
void print_string(va_list s)
{
	char *str;

	str = va_arg(s, char *);
	if (!str)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: format specifier
 */
void print_all(const char * const format, ...)
{
	char *separator = "";
	va_list specifier;
	unsigned int i = 0, j = 0;
	type_t type[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL},
	};

	va_start(specifier, format);

	while (format && format[i])
	{
		j = 0;
		while (type[j].type)
		{
			if (type[j].type[0] == format[i])
			{
				printf("%s", separator);
				type[j].f(specifier);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(specifier);
}
