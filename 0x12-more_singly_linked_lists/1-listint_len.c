#include "lists.h"
#include <stdlib.h>
/**
 * list_len - calculate the len
 * @h: pointer to the head
 *
 * Return: a
 */

size_t listint_len(const listint_t *h)
{
	int a;

	while(h)
	{
		h = h->next;
		a++;
	}
	return (a);
}
