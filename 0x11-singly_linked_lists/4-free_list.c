#include "lists.h"
#include <stdlib.h>
/**
 *free_list - free the memory space of the list
 *
 *@head: pointer to the head of the list
 */
void free_list(list_t *head)
{
	list_t *tmp;
	
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
