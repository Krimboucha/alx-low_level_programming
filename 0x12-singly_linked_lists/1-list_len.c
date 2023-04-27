#include "lists.h"

/**
 * list_len - Counts the number of elements in a linked list
 * @h: pointer to struct
 *
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	size_t c;

	c =  0;
	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}
