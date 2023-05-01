#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/** print_listint - prints all the elements of a listint_t list
 * @h pointer to the first node
 *
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
