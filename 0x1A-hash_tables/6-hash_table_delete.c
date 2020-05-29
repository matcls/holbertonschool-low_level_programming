#include "hash_tables.h"

/**
 * hash_table_delete -  deletes a hash table.
 * @ht: is the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int index = 0;
	hash_node_t *tmp = NULL;

	while (index < ht->size)
	{
		if (ht->array[index])
		{
			while (ht->array[index])
			{
				tmp = ht->array[index]->next;
				free(ht->array[index]->value);
				free(ht->array[index]->key);
				free(ht->array[index]);
				ht->array[index] = tmp;
			}
			free(ht->array[index]);
		}
		index++;
	}
	free(ht->array);
	free(ht);
	ht = NULL;
}
