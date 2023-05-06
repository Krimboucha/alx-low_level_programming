#include "main.h"
#include <stdio.h>

/** print_binary - prints the binary representation number
 * @n: UL
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask;

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		mask >>= 1;
	}
	_putchar('\n');
}
