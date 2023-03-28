#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: first pointer to switch
 * @b: second pointer t
 * return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
