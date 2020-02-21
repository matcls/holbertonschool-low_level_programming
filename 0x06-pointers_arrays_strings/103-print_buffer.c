#include "holberton.h"
#include <stdio.h>

/**
 * print_buffer -  print the content of size bytes of the buffer pointed by b
 * The output should print 10 bytes per line
 * Each line starts with the position of the first byte of the line
 * in hexadecimal (8 chars), starting with 0
 * Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes
 * at a time, separated by a space
 * Each line shows the content of the buffer. If the byte is a printable
 * character, print the letter, if not, print .
 *
 * @b:    buffer
 * @size: buffer size
 *
 * Return: 0
 */

void print_buffer(char *b, int size)
{
	int byte, index;

	/* printf("%d\n", size); */
	/* printf("%s\n", b); */

	if (size <= 0)
	printf("%c", 10);

	for (byte = 0; byte < size; byte += 10)
	{
		printf("%.8x: ", byte);

		for (index = 0; index < 10; index++)
		{
			if (index + byte >= size)
				printf("%c%c", 32, 32);

			else
				printf("%.2x", b[index + byte]);

			if (index % 2 != 0 && index != 0)
				printf("%c", 32);
		}
		for (index = 0; index < 10; index++)
		{
			if (index + byte >= size)
				break;

			else if (b[index + byte] >= 31 &&
				 b[index + byte] <= size)
			printf("%c", b[index + byte]);

			else
			printf("%c", 46);
		}
		if (byte >= size)
			continue;

		printf("%c", 10);
	}
}
