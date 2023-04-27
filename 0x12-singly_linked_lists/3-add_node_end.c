#include "lists.h"

/**
 * add_node_end - adds a node to the end of a list_t list
 * @head: pointer to pointer to list_t
 * @str: pointer to char
 *
 * Return: list_t
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_ptr = malloc(sizeof(list_t));
	list_t *ptr;

	if (new_ptr == NULL)
	{
		return (NULL);
	}
	new_ptr->str = strdup(str);
	new_ptr->len = strlen(str);
	new_ptr->next = NULL;
	if (*head == NULL)
	{
		*head = new_ptr;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new_ptr;
	}
	return (new_ptr);
}
