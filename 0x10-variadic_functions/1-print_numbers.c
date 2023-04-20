#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers -  prints numbers, followed by a new line
 * @separator: pointer to char
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	va_start(args, n);

	for (unsigned int i = 0; i < n; i++)
	{
		int num = va_arg(args, int);
		printf("%d", num);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}

