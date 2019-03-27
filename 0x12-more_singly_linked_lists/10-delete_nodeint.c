#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node according to the index
 *
 * @head: pointer to head
 * @index: element to delete
 * Return: 1 if success or -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux;
	listint_t *delete;
	unsigned int a = 0;

	aux = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(aux);
	}
	else
	{
		while (a < index - 1)
		{
			aux = aux->next;
			if (aux == NULL)
				return (-1);
			a++;
		}
		delete = aux;
		delete = delete->next;
		aux->next = delete->next;
		free(delete);
	}
	return (1);
}
