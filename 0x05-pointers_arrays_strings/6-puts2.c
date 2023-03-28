#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other char of a string
 * @str: pointer to char
 * Return: void
 */
void puts2(char *str)
{
	unsigned long int i;

	for (i = 0; i < strlen(str); i++)
	{
		if (i % 2 != 0)
		{
			continue;
		}
		_putchar(str[i]);
	}
	_putchar('\n');
}
