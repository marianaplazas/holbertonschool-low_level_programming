#include "sort.h"
/**
 *cocktail_sort_list - sort array with cocktail sort algorithm
 *@list: pointer to the list
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *i, *aux;
	int j = 1;

	while(j == 1)
	{
		for(i = *list; i->next != NULL; i = i->next)
		{
			if (i->n > i->next->n)
				swap_list(i, aux, list);
		}
		for(; i->prev != NULL; i = i->prev)
		{
			if (i->n < i->prev->n)
				swap_list(i, aux, list);
		}
		for(aux = *list; j == 1; aux = aux->next)
		{
			if (aux->next == NULL)
				return;
			if (aux->n > aux->next->n)
				break;
		}
	}
}



void swap_list(listint_t *i, listint_t *aux, listint_t **list)
{
	if(i->next != NULL)
		i->next->prev = i->prev;
	if(i->prev->prev != NULL)
		i->prev->prev->next = i;
	else
		*list = i;
	i->prev->next = i->next;
	i->next = i->prev;
	aux = i->prev->prev;
	i->prev->prev = i;
	i->prev = aux;
	print_list(*list);
}
