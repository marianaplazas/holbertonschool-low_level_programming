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
	size_t aux;

	aux = 0;
	while (h != NULL)
	{
		aux++;
		h = h->next;
	}
	return (aux);
}
