#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of
 *  a list_t list
 *  @head: pointer to pointer to struct
 *  @str: pointer to char
 *
 *  Return: list_t
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->str = strdup(str);
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}

