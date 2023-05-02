#include "lists.h"

/**
 * pop_listint - deletes head node of a list
 * @head: pointer to pointer
 *
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr = malloc(sizeof(listint_t));
	int data;

	data = 0;
	if (*head == NULL)
		return (-1);
	ptr = *head;
	data = ptr->n;
	*head = ptr->next;
	free(ptr);
	return (data);
}
