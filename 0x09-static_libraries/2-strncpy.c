#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: pointer to char
 * @src: pointer to char
 * @n: number of characters to copy
 * return: dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *p = dest;

	i = 0;
	while (i < n && *src != '\0')
	{
		*p = *src;
		p++;
		src++;
		i++;
	}
	while (i < n)
	{
		*p = '\0';
		i++;
	}
	return (dest);
}
