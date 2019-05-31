#include "hash_tables.h"
/**
 *hash_table_create - create a hash table
 *@size: the size of the array
 *Return: pointer to a hash
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;
	unsigned long int a;

	if (size == 0)
		return (NULL);
	new_hash = malloc(sizeof(hash_table_t));

	if (new_hash == NULL)
		return (NULL);

	new_hash->array = malloc(sizeof(hash_node_t *) * size);

	if (new_hash->array == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		new_hash->array[a] = NULL;

	new_hash->size = size;
	return (new_hash);
}
