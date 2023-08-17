#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
 * insert_dnodeint_at_index - ...
 * @h: ...
 * @idx: ...
 * @n: ...
 *
 * Return: ...
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int current_idx;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;

	current_idx = 0;
	if (h == NULL)
		return (NULL);
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0 || *h == NULL)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (current != NULL && current_idx < idx - 1)
	{
		current = current->next;
		current_idx++;
	}
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = current;
	new_node->next = current->next;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;
	return (new_node);
}
