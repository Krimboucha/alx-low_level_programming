#include "main.h"

/** get_bit - returns the value of a bit at a given index
 * @n: unsigned long int
 * @index: unsigned index
 *
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	mask = 1UL << index;
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	if ((n & mask) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
