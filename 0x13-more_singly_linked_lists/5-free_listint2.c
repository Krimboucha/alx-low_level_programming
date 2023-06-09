#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer to pointer
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		ptr = *head;
		free(*head);
		*head = ptr->next;
	}
	*head = NULL;
}
