#include "lists.h"
#include <stdlib.h>
/**
 *free_list - free the memory space of the list
 *
 *@head: pointer to the head of the list
 */
size_t free_list(list_t *head)
{
	size_t new_n;

	new_n = 0;
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		new_n++;
	}
	return (new_n);
}
