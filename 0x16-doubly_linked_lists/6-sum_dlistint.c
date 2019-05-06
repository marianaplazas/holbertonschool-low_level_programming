#include "lists.h"
/**
 * sum_dlistint - sum all nodes
 *
 * @head: pointer to head
 * Return: returns the sum of all nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *counter;

	counter = head;
	if (head == NULL)
		return (0);

	while (counter != NULL)
	{
		sum += counter->n;
		counter = counter->next;
	}
	return (sum);
}
