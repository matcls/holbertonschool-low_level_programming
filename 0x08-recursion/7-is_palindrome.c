#include "holberton.h"

/**
 * _strlen - calculate the length of string
 *
 * @s: given string
 *
 * Return: the number of bytes in the string pointed to by s
 */

int _strlen(char *s)
{
	return (*s ? 1 + _strlen(s + 1) : 0);
}

/**
 * finds_palindrome - checks if a string is a palindrome
 *
 * @s:      string to be checked
 * @length: lenght of the string
 * @i:      iterator number to help find if s is palindrome
 *
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */

int finds_palindrome(char *s, int length, int i)
{
	if (i >= length / 2)
		return (1);
	if (*(s + i) == *(s + length - i - 1))
		return (finds_palindrome(s, length, i + 1));
	return (0);
}

/**
 * is_palindrome - finds out if a string is a palindrome
 *
 * @s:      the string to be checked
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int length = _strlen(s);

	return (finds_palindrome(s, length, 0));
}
