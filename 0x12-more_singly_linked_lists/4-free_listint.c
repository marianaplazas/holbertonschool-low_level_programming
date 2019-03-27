#include "lists.h"
#include <stdlib.h>
/**
 *free_list - free the memory space of the list
 *
 *@head: pointer to the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

        while (head)
        {
		aux = head;
		head = head->next;
		free(aux);
        }
}
