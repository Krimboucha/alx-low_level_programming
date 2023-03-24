#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: size of triangle.
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = size; i >= 1; i--)
	{
		for (j = 1; j <= i - 1; j++)
		{
			_putchar(' ');
		}
		for (k = i; k <= size; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
