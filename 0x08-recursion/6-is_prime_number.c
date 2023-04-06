#include "main.h"

/**
 * real_function - checks if a number is prime
 * @n: int
 * @i: int
 *
 * Return: 1 if prime, 0 if not
 */

int real_function(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	if (i  >= n / 2)
	{
		return (1);
	}
	return (real_function(n, i + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: int
 *
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	return (real_function(n, 2));
}
