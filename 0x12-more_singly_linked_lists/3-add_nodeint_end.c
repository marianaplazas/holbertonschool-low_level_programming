#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *add_nodeint_end - add new node at the end
 *
 *@head: pointer to the head
 *@n: int
 *
 *Return: node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *aux;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		aux = *head;
		while (aux->next)
		{
			aux = aux->next;
		}
		aux->next = new;
	}
	return (new);
}
