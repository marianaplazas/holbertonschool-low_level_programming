#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *add_nodeint_end - add a new node at the start
 *
 *@head: double pointer to the head
 *@n: integer
 *
 *Return: the value of the node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if(new == NULL)
		return(NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
