#include "lists.h"

/** insert_nodeint_at_index - inserts a node at a given position
 * @head: pointer to pointer
 * @idx: unsigned int
 * @n: int
 *
 * Return: listint_t
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = head;
	int i = 0;

	if (idx == 0)
		addnodeint(**head,n);
	while (i < idx)
	{
		ptr = ptr->next;
		i++;
	}
}

/**
 * add_nodeint - add a new node at the beginning of a list
 * @head: pointer to pointer
 * @n: int
 *
 * Return: pointer or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newFirst = malloc(sizeof(listint_t));

	if (newFirst == NULL)
		return (NULL);

	newFirst->n = n;
	newFirst->next = *head;
	*head = newFirst;
	return (newFirst);
}
