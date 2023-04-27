#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to structure
 *
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	size_t comp;

	comp = 0;
	while (h)
	{
		if (!(h->str))
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		comp++;
		h = h->next;
	}
	return (comp);
}
