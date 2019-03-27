#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_listint2 - free list
 *
 *@head: pointer to head
 */
void free_listint2(listint_t **head)
{
	listint_t *empty;

	if (head == NULL)
		return; 

	while (*head)
	{
		empty = *head;
		*head = (*head)->next;
		free(empty);
	}

}
