#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to char
 * @b: char
 * @n: unsigned int
 * Return: pointer to memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = b;
		i++;
	}
	return (s);
}
