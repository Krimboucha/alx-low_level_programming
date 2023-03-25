#include "main.h"
/**
 * print_last_digit - print last digit of an int
 * @n: int
 *
 * Return: last digit of int
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = _abs(n);
	}
	_putchar(n % 10 + '0');
	return (n % 10);
}
