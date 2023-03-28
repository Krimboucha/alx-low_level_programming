#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse a string
 * @s: pointer to char
 * Return: void
 */
void rev_string(char *s) {
	int length;
	int i;
	char *head;
	char *tail;
	char tmp;

	length = 0;
	*head = s;
	*tail = s;
	while (*tail != '\0')
	{
		length++;
		tail++;
	}
	tail--;
	for (i = 0; i < length/2; i++)
	{
		tmp = *tail;
		*tail = *head;
		*head = tmp;
		head++;
		tail--;
	}
}
