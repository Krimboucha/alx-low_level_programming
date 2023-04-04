#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to char
 * @accept: pointer to char
 * Return: pointer to char
 */

char *_strpbrk(char *s, char *accept)
{
	char *ptr = accept;

	while (*s != '\0')
	{
		while (*ptr != '\0')
		{
			if (*s == *ptr)
			{
				return (s);
			}
			ptr++;
		}
		s++;
	}
	return (NULL);
}
