#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to char
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int counter;

	counter = 0;
	if (counter == 0)
	{
		s++;
		_print_rev_recursion(s);
	}
	if (*s == '\0' || counter == 1)
	{
		s--;
		_putchar(*s);
		counter = 1;
	}
}
