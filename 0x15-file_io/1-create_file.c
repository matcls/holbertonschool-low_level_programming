#include "holberton.h"

/**
 * create_file - creates a file.
 * @filename: a pointer to the file to write.
 * @text_content: string to write to the file.
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	file  = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	write(file, text_content, strlen(text_content));

	return (1);
}
