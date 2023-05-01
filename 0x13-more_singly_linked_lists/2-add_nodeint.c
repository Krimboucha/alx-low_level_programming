#include "lists.h"

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
