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

	i = 1;
	while (i <= n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	while (i <= n)
	{
		*dest = '\0';
		i++
	}
	return (dest);
}
