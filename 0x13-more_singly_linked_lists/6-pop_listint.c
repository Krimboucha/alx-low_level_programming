#include "lists.h"

/**
 * pop_listint - deletes head node of a list
 * @head: pointer to pointer
 *
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	data = 0;
	if (*head == NULL)
		return (data);
	ptr = *head;
	data = ptr->n;
	*head = ptr->next;
	free(ptr);
	return (data);
}
