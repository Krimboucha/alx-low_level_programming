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
		while (*s)
		{
			s++;
			counter = 1;
		}
		if (*s == '\0')
		{
			s--;
		}
	}
	else
	{
		_putchar(*s);
		s--;
		_print_rev_recursion(s);
	}
}
