#include "lists.h"

/**
 * free_list - frees a linked list_t list
 * @head: pointer to list_t
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *ptr = head;
	list_t *next;

	while (current != NULL)
	{
		next = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = next;
	}
}
