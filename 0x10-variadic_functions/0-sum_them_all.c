#include <stdarg.h>

/**
 * sum_them_all - sum of all its parameters
 * @n: int
 *
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	va_list args;
	int i;

	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	args;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
