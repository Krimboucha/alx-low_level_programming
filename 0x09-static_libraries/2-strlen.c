#include "main.h"

/**
 * _strlen - return length of string
 * @s: pointer to char
 *
 * Return: length number with null terminator
 */

int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
