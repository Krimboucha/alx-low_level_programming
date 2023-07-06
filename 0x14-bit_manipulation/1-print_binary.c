#include <stdio.h>
#include "main.h"

/** print_binary - prints the binary representation number
 * @n: UL
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int start;

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	start = 0;
	if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
		return;
	}
	while (mask > 0)
	{
		if (n & mask)
		{
			start = 1;
			_putchar('1');
		}
		else if (start)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
	_putchar('\n');
}

