#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly
 * allocated space in memory
 * @str: pointer to char
 *
 * Return: pointer to char
 */

char *_strdup(char *str)
{
	int i;
	int size;
	char *newStr;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		size++;
	}
	newStr = malloc(size + 1);
	if (newStr == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		newStr[i] = str[i];
	}
	return (newStr);
}
