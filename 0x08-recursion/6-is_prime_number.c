#include "holberton.h"

/**
 * prime - finds if a given naumber is prime
 *
 * @n: number to be checked
 * @i: iterator number to help find if n is prime
 *
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 */

int prime(int n, int i)
{
	/* using i because everyone uses i */
	if (n / 2 < i)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (prime(n, i + 1));
}

/**
 * is_prime_number - check if a given naumber is prime
 *
 * @n: number to be checked
 *
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime(n, 2));

}
