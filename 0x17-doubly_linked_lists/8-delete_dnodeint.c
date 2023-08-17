#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
 * delete_dnodeint_at_index - ...
 * @head: ...
 * @index: ...
 *
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int current_idx;

	current_idx = 0;
	if (head == NULL || *head == NULL)
		return (-1);
	while (current != NULL && current_idx < index)
	{
		current = current->next;
		current_idx++;
	}
	if (current == NULL)
		return (-1);
	if (current->prev != NULL)
		current->prev->next = current->next;
	else
		*head = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
