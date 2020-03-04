#include "holberton.h"

/**
 * count_letters - counts the number of letters of a word
 *
 * @str: string.
 *
 * Return: number of letters of a word
 */
int count_letters(char *str)
{
	int index = 0, letters = 0;

	while (str[index] && str[index] != 32)
	{
		letters++;
		index++;
	}

	return (letters);
}

/**
 * count_words - Counts the number of words in a given string
 * @str: given string
 *
 * Return: number of words in str.
 */
int count_words(char *str)
{
	int index, words = 0, length = 0;

	for (index = 0; str[index]; index++)
		length++;

	for (index = 0; index < length; index++)
	{
		if (str[index] != 32)
		{
			words++;
			index += count_letters(str + index);
		}
	}

	return (words);
}

/**
 * strtow - splits a string into words
 * @str: given string
 *
 * Return: a pointer to an array of strings (words)
 * NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
	char **output;
	int index = 0, words, w, letters, l;

	if (str == NULL || str[0] == 0)
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	output = malloc((words + 1) * sizeof(char *));
	if (output == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[index] == 32)
			index++;

		letters = count_letters(str + index);

		output[w] = malloc((letters + 1) * sizeof(char));

		if (output[w] == NULL)
		{
			for (; w >= 0; w--)
				free(output[w]);

			free(output);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
			output[w][l] = str[index++];

		output[w][l] = 0;
	}
	output[w] = NULL;

	return (output);
}
