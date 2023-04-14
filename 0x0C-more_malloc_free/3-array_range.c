#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: int
 * @max: int
 *
 * Return: pointer to int
 */

int *array_range(int min, int max)
{
	int i;
	int n;
	int *arr;

	n = max - min + 1;
	arr = malloc(n * sizeof(int));
	if (min > max)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
