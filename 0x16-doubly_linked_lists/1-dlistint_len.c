#include "lists.h"
/**
 *dlistint_len - calculates the len of a linked list
 *
 *@h: pointer to the head
 *Return: len
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
