#include <stdlib.h>
#include "lists.h"
/**
 *print_list - print the list
 *
 *@h: pointer to the header
 *
 *Return: a
 */
size_t listint_len(const listint_t *h)
{
        int a = 0;

	while (h)
	{
		printf("%d\n", h->n);
		a++;
		h = h->next;
	}
	return(a);
}
