#include "lists.h"
/**
 * free_dlistint - function to free a dlistint_t list
 * @head: pointer to head of linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = aux->next;
		free(aux);
	}
}
