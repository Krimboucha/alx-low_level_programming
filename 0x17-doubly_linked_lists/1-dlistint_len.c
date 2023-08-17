#include<stdio.h>
#include "lists.h"

/** print_dlistint - prints a doubly linked list
 * @h: pointer
 *
 * Return: size_t
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
 	return (count);
}
