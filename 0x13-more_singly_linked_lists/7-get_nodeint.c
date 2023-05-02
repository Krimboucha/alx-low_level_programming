#include "lists.h"

/** get_nodeint_at_index -  returns the nth node of a list
 * @head: pointer to listint
 * @index: unsigned  int
 *
 * Return: listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i;

	i = 0;
	while (i < index)
	{
		if (current == NULL)
		{
			return (NULL);
		}
		current = current->next;
		i++;
	}
	return (current);
}
