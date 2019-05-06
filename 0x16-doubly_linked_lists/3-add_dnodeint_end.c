#include "lists.h"
/**
 *add_dnodeint_end - add node at the end
 *
 *@head: pinter to the head
 *@n: constant value
 *Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *aux = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		aux = *head;
		while (aux->next != NULL)
			aux = aux->next;
		new_node->prev = aux;
		aux->next = new_node;
	}
	return (new_node);
}
