#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabet in lower cases
 *
 */

int main (void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	putchar('\n');
}
