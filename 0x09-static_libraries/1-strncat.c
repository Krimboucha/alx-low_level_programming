#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: pointer to char
 * @src: pointer to char
 * @n: number of characters to concatenate from src
 * return: dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *ptr = dest;

	i = 1;
	while (*ptr != '\0')
	{
		ptr++;
	}
	while (i <= n && *src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
		i++;
	}
	*ptr = '\0';
	return (dest);
}
