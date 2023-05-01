#include "lists.h"

/**
 * free_listint - Frees a list
 * @head: pointer to listint_t
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	while ((ptr  = head) != NULL)
	{
		head = ptr->next;
		free(ptr);
	}
}
