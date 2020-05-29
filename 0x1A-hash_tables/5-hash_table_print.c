#include "hash_tables.h"

/**
 * hash_table_print -  prints a hash table.
 * @ht: is the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, j = 0;
	hash_node_t *tmp;

	if (!ht)
		return;

	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			tmp = ht->array[i];
			while (tmp)
			{
				if (j == 0)
					printf("'%s': '%s'", tmp->key, tmp->value);
				else
					printf("%s'%s': '%s'", ", ", tmp->key, tmp->value);
				j++;
				tmp = tmp->next;
			}
		}
		i++;
	}
	printf("}\n");
}
