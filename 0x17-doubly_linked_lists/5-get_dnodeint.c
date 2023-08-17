#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int current_index = 0;
	dlistint_t *current = head;

	while (current != NULL && current_index < index)
	{
		current = current->next;
		current_index++;
	}
	return (current);
}
