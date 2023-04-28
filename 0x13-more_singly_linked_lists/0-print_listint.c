#include "lists.h"

/** size_t print_listint - prints all the elements of a listint_t list
 * @h pointer to the first node
 *
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	ptr = h;
	while (ptr)
	{
		printf("%d", ptr->n);
		ptr = ptr->next;
	}
	return (0);
}
