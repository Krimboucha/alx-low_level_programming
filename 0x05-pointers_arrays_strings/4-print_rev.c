#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: pointer to char
 * Return: void
 */

void print_rev(char *s)
{
	int length;
	int i;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
