#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table
 * @key: the key to look for
 *
 * Return: value associated with the element, or NULL if couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index = 0;
	hash_node_t *tmp = NULL;

	if (!ht || !key || !strlen(key))
		return (NULL);
	while (index < ht->size)
	{
		if (ht->array[index])
		{
			tmp = ht->array[index];
			while (tmp)
			{
				if (!strcmp(key, tmp->key))
					return (tmp->value);
				tmp = tmp->next;
			}
		}
		index++;
	}
	return (NULL);
}
