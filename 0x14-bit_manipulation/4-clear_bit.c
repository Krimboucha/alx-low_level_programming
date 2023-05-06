#include "main.h"

/** clear_bit - sets a bit to 0 at a given index
 * @n: pointer to ul
 * @index: unsigned int
 *
 * Return: int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = ~(1UL << index);
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= mask;
	return (1);
}

