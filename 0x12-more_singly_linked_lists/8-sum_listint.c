#include "lists.h"
/**
 *sum_listint - sum all values
 *
 *@head: pointer to head
 *Return: the sum or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *aux;

	for (aux = head; aux != NULL; aux = aux->next)
		sum += aux->n;
	return (sum);
}
