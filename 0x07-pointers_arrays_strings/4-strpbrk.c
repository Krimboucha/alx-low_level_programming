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
	char *ptr;

	ptr = accept;
	while (*s != '\0')
	{
		while (*p != '\0')
		{
			if (*s == *p)
			{
				return (s);
			}
			p++;
		}
		s++;
	}
	return (NULL);
}
