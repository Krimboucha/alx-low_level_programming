#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: pointer to char
 * @s2: pointer to char
 * Return: pointer to char
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int lenS1;
	int lenS2;
	char *newStr;

	i = 0;
	j = 0;
	lenS1 = 0;
	lenS2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[lenS1] != '\0')
	{
		lenS1++;
	}
	while (s2[lenS2] != '\0')
	{
		lenS2++;
	}
	newStr = malloc(lenS1 + lenS2 + 1);
	if (newStr == NULL)
		return (NULL);
	while (i < lenS1)
	{
		newStr[i] = s1[i];
		i++;
	}
	while (j < lenS2)
	{
		newStr[i] = s2[j];
		i++;
		j++;
	}
	newStr[i] = '\0';
	return (newStr);
}
