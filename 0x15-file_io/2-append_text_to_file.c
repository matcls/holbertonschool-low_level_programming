#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: a pointer to the file.
 * @text_content: the string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content)
		write(file, text_content, strlen(text_content));

	close(file);

	return (1);
}
