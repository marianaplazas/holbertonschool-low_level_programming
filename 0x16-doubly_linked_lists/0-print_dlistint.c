#include "lists.h"
/**
 *print_dlistint - prints all the elements of a double linked list
 *
 *@h: pointer to the head
 *Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
