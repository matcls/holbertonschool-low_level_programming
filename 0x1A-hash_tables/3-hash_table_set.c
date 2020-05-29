#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table.
 * @key: the key to add.
 * @value: the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL, *tmp = NULL;
	unsigned long int index = 0;

	if (!ht || !key || !value || !strlen(key))
		return (0);
	index  = key_index((const unsigned char *)key, ht->size);
	/* check for collision */
	tmp = ht->array[index];
	while (tmp && strcmp(tmp->key, key))
		tmp = tmp->next;
	if (tmp)
	{
		free(tmp->value);
		tmp->value = strdup(value);
		if (!tmp->value)
			return (0);
		return (1);
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(new);
		return (0);
	}
	new->next = ht->array[index];
	ht->array[index] = new;
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (0);
	}
	return (1);
}
