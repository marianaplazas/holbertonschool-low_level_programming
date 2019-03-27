#include <stdlib.h>
#include "lists.h"
/**
 *listint_len - print the list
 *
 *@h: pointer to the header
 *
 *Return: a
 */
size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		printf("%d\n", h->n);
		a++;
		h = h->next;
	}
	return (a);
}
