#include "main.h"
/**
 * int _strcmp - compares two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return: 0 if the two strings r similar, positive if s1>s2 in ASCII,
 * negative if s1<s2 in ASCII
 */
int _strcmp(char *s1, char *s2)
{
	int counter;

	counter = 0;
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	if (*s1 != *s2)
	{
		counter = *s1 - *s2;
	}
	return (counter);
}
