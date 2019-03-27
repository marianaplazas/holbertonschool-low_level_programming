#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 *print_listint - print the list
 *
 *@h: pointer to the header
 *
 *Return: a
 */
size_t print_listint(const listint_t *h)
{
	int a = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		a++;
	}
	return (a);
}
