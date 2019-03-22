#include "lists.h"
#include <stdlib.h>
/**
 *print_list - print the list
 *
 *@h: pointer to the header
 *
 *Return: a
 */
size_t print_list(const list_t *h)
{
	int a;

	for (a = 0; h != NULL; a++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (a);
}
