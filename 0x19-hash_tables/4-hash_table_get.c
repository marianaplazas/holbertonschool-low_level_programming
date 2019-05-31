#include "hash_tables.h"
/**
 *hash_table_get - return the value of the key
 *@ht: pointer to the hash
 *@key: pointer to the key
 *Return: value of the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long index;
	hash_node_t *tmp;
	int a;

	if (ht  == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = (ht->array[index]);
	while (tmp != NULL)
	{
		a = strcmp(key, tmp->key);
		if (a == 0)
			return (tmp->value);
		tmp = tmp->next;
		return (tmp == NULL ? NULL : tmp->value);
	}
	return (NULL);
}
