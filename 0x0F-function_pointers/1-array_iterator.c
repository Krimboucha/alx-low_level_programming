#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a
 *  parameter on each element of an array.
 * @size: size of the array
 * @array: pointer to int
 * @action: pointer to the function to call
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);

		}
	}
}
