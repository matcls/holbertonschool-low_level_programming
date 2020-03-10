#include "dog.h"
#include <stdlib.h>

/**
 * _strlen  -  returns the length of a string.
 *
 * @s: given string
 *
 * Return: String length
 */

int _strlen(char *s)
{
	int length = 0;

	if (*s)
	{
		while (*(s + length))
		++length;
	}

	return (length);
}

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 *
 * @src:  source string array
 * @dest: destiny for src array
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int position;

	/* cicle until null */
	for (position = 0; src[position]; position++)
		dest[position] = src[position];
	/* including the null byte in the end */
	dest[position] = '\0';
	return (dest);
}

/**
 * new_dog - add a new dog
 * @name:  dog's name
 * @age:   dog's age
 * @owner: dog's owner
 * Description:  description
 *
 * Return: a pointer to the new dog struct or NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	if (!name && !owner)
		return (NULL);

	newdog = malloc(sizeof(dog_t));
	if (!newdog)
		return (newdog);

	newdog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (!newdog->name)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}

	newdog->owner = malloc((sizeof(char) * _strlen(owner) + 1));
	if (!newdog->owner)
	{
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}

	newdog->name = _strcpy(newdog->name, name);
	newdog->age = age;
	newdog->owner = _strcpy(newdog->owner, owner);
	return (newdog);
}

