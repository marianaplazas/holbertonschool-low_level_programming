#include "lists.h"
#include <stdlib.h>
/**
 *free_list - free the memory space of the list
 *
 *@head: pointer to the head of the list
 */
void free_list(list_t *head)
{
	list_t *aux;

	aux = head;
	while (aux != NULL)
	{
		head = aux->next;
		free(aux->str);
		free(aux);
		aux = head;
	}
}
