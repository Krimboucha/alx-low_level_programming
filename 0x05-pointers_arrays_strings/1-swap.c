#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a first pointer to switch
 * @b second pointer to switch
 * return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
