#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node
 *
 * @head: pointer to the head
 * @index: the index
 * Return: the node at nth index or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	dlistint_t *aux;
	unsigned int counter = 0;

	aux = head;
	while (aux != NULL && counter <= index)
	{
		if (counter == index)
			return (aux);
		aux = aux->next;
		counter++;
	}
	return (NULL);
}
