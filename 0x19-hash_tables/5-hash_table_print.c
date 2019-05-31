#include "hash_tables.h"
/**
 * hash_table_print - print the hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int a = 0; 
	unsigned long int b = 0; 
	hash_node_t *tmp;

	if (ht == NULL)
		return;

	putchar('{');
	for (a = 0; a < ht->size; a++)
	{
		if (ht->array[a] != NULL)
		{
			tmp = ht->array[a];
			while (tmp)
			{
				printf("%s'%s': '%s'", b == 0 ? "" : ", ", tmp->key, tmp->value), b++;
				tmp = tmp->next;
			}
		}
	}
	printf("}\n");
}
