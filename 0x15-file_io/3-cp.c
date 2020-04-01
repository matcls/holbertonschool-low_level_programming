m#include "holberton.h"

/**
 * main - copies the content of a file to another file.
 * @argc: the number of arguments.
 * @argv: arguments.
 * Description:  description
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int src, dest, rd, wt;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, ERROR97), exit(97);

	src = open(argv[1], O_RDONLY);
	if (src == -1)
		dprintf(STDERR_FILENO, ERROR98,	argv[1]), exit(98);

	dest = open(argv[2], (O_CREAT | O_TRUNC | O_WRONLY), 0664);

	while ((rd = read(src, buffer, 1024)) > 0)
	{
		wt = write(dest, buffer, rd);
		if ((wt != rd) || (wt == -1))
			dprintf(STDERR_FILENO, ERROR99, argv[2]), exit(99);
	}

	if (rd == -1)
		dprintf(STDERR_FILENO, ERROR98, argv[1]), exit(98);

	if (close(src))
		dprintf(STDERR_FILENO, ERROR100, src), exit(100);

	if (close(dest))
		dprintf(STDERR_FILENO, ERROR100, dest), exit(100);

	return (0);
}

