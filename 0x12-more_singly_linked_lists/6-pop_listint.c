#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *pop_listint -  deletes the head node
 *
 *@head: pointer to head
 *Return: the value of the node or if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *aux_h = NULL;
	int a = 0;

	if (*head == NULL)
		return (0);

	aux_h = *head;
	a = aux_h->n;
	*head = aux_h->next;
	free(aux_h);
	return (a);
}
