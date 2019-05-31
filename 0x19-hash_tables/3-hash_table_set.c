#include "hash_tables.h"
/**
 **
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long index, size;
	hash_node_t *new_node;

	if (ht  == NULL || key == NULL || value == NULL)
		return (0);

	size = ht->size;
	index = key_index((const unsigned char *)key, size);
	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0); 

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
