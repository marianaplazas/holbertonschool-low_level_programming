#include "lists.h"
#include <stdlib.h>
/**
 *print_list - print the list
 *
 *@h: pointer to the header
 *
 *Return: a
 */
void print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h !=  NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
