#include "lists.h"

/** sum_listint - sum of all the data (n) of a list
 * @head: pointer to listint
 *
 * Retun: int
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
