#include "lists.h"

/**
 * listint_len - number of elements in a linked list
 * @h: pointer to the first node
 *
 * Return: size_t
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
