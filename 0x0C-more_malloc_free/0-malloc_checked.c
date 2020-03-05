#include "holberton.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to allocate
 *
 * if malloc fails, the malloc_checked function should cause normal
 * process termination with a status value of 98
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *memalloc = malloc(b);

	if (!memalloc)
		exit(98);
	return (memalloc);
}
