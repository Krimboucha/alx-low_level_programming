#include "main.h"
#include <stdlib.h>
#include <string.h>
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to char
 * @s2: pointer to char
 * @n: unsigned int
 *
 * Return: pointer to char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1;
	unsigned int l2;
	char *newStr;

	l1 = strlen(s1);
	l2 = strlen(s2);
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= l2)
	{
		n = l2;
	}
	newStr = malloc(l1 + n + 1);
	if (newStr == NULL)
	{
		return (NULL);
	}
	_memcpy(newStr, s1, l1);
	_memcpy(newStr + l1, s2, n);
	newStr[l1 + n] = '\0';
	return (newStr);
}

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: memory area to to which n bytes of src will be copied
 * @src: memory area from which n bytes will be copied
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	return (dest);
}
