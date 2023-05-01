#include "lists.h"

/**
 * add_nodeint_end - Adds node at the end of a list
 * @head: pointer to pointer
 * @n: int to be added
 *
 * Return: listint_t
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));
	listint_t *newPtr = malloc(sizeof(listint_t));

	if (newPtr == NULL)
		return (NULL);

	newPtr->n = n;
	newPtr->next = NULL;

	if ((*head) == NULL)
	{
		*head = newPtr;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = newPtr;
	}
	return (newPtr);
}
