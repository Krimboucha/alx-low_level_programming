#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: pointer to int
 * @size: int
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1;
	int sum2;
	int size2;

	sum1 = 0;
	sum2 = 0;
	size2 = size*size;
	for (i = 0; i < size2; i += size + 1)
	{
		sum1 += *(a + i);
	}
	for (i = size - 1; i < size2 - 1; i += size - 1)
	{
		sum2 += *(a + i);
	}
	printf("%d, %d", sum1, sum2);
	printf("\n");
}
