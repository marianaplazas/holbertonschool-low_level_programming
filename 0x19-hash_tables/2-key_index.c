#include "hash_tables.h"
/**
 *key_index - function that give the position of the key
 *@key: the key word
 *@size: the size of the array
 *Return: the position
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_position;

	key_position = hash_djb2(key);
	return (key_position % size);
}
