#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies a string
 * @src: pointer to char
 * @dest: pointer to char
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
