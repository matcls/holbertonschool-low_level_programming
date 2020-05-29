#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of the array.
 * Return: a pointer to the newly created hash table
 * If something went wrong NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *ht = NULL;

	if (size != 0)
		ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}
	while (size--)
		ht->array[size] = NULL;

	return (ht);
}
