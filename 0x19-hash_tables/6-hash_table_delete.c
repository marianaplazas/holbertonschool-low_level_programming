#include "hash_tables.h"
/**
 * hash_table_delete - free all
 * @ht: the hash table
 *Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head, *tmp;
	unsigned int i = 0;

	if (ht == NULL)
		return;

	while (i < ht->size)
	{
		head = ht->array[i];
		while (head != NULL)
		{
			tmp = head->next;
			free(head->key);
			free(head->value);
			free(head);
			head = tmp;
		}
		i++;
		free(head);
	}
	free(ht->array);
	free(ht);
}
