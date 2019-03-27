#include "lists.h"
#include <stdlib.h>
/**
 *listint_len - calculate the len
 * @h: pointer to the head
 *
 * Return: a
 */

size_t listint_len(const listint_t *h)
{
	int a;

	while (h != NULL)
	{
		h = h->next;
		a++;
	}
	return (a);
}
