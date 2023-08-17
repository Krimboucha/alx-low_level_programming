#include<stdio.h>
#include "lists.h"
/**
 * dlistint_len -  returns length of a list
 * @h: pointer
 *
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
