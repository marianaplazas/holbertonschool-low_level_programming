#include "lists.h"
#include <stdlib.h>
/**
 * list_len - calculate the len
 * @h: pointer to the head
 *
 * Return: a
 */

size_t list_len(const list_t *h)
{
	int a;

	for (a = 0; h != NULL; a++)
	{
		h = h->next;
	}
	return (a);
}
