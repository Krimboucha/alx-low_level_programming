#include "main.h"

/**
 * real_sqrt - returns the natural square root of an int
 * @n: int
 * @i: int
 *
 * Return: -1 or int
 */

int real_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (real_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of an int
 * @n: int
 *
 * Return: -1 or int
 */

int _sqrt_recursion(int n)
{
	return (real_sqrt(n, 1));
}
