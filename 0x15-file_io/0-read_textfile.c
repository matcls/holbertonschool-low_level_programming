#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output.
 * @filename: a pointer to the file to read.
 * @letters: the number of letters to read and print.
 *
 * Return: the number of letters read and printed
 * if the file can not be opened or read 0
 * if filename is NULL  0
 * if write fails or does not write the expected amount of bytes,  0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t writed;
	char *buffer;

	if (!filename)
		return (0);

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	writed = read(file_d, buffer, letters);
	writed = write(STDOUT_FILENO, buffer, writed);
	close(file_d);
	return (writed);
}
