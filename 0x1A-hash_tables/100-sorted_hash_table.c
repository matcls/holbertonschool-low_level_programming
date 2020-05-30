#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted shash table.
 * @size: size of the array.
 * Return: a pointer to the newly created hash table
 * If something went wrong NULL.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = NULL;

	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}
	while (size--)
		ht->array[size] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_set_helper - adds an element to the hash table.
 * @ht: the hash table.
 * @new: the key to add.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
void shash_set_helper(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *tmp = NULL;

	new->sprev = NULL;
	new->snext = ht->shead;

	if (!ht->shead || !strcmp(new->key, ht->shead->key))
	{
		if (ht->shead)
			ht->shead->sprev = new;
		ht->shead = new;
		if (!ht->stail)
			ht->stail = new;
	}
	else
	{
		do {
			tmp = new->snext;
			new->snext = tmp->snext;
		} while (new->snext &&
			 strcmp(new->key, new->snext->key));
		new->sprev = tmp;
		if (tmp->snext)
			tmp->snext->sprev = new;
		else
			ht->stail = new;
		tmp->snext = new;
	}
}

/**
 * shash_table_set - adds an element to the hash table.
 * @ht: the hash table.
 * @key: the key to add.
 * @value: the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new = NULL, *tmp = NULL;

	if (!ht || !ht->array || !key || !*key || !value)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (!strcmp(tmp->key, key))
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}

	new = malloc(sizeof(shash_node_t));
	if (!new)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	if (!new->key || !new->value)
	{
		free(new->key);
		free(new->value);
		free(new);
		return (0);
	}
	new->next = ht->array[index] ? ht->array[index] : NULL;
	ht->array[index] = new;

	shash_set_helper(ht, new);
	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: the sorted hash table
 * @key: the key to look for
 *
 * Return: value associated with the element, or NULL if couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *tmp = NULL;

	if (!ht || !ht->array || !key || !(*key))
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);
	for (tmp = ht->array[index]; tmp; tmp = tmp->next)
		if (!strcmp(tmp->key, key))
			return (tmp->value);
	return (NULL);
}

/**
 * shash_table_print -  prints a sorted hash table.
 * @ht: is the hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp = NULL;
	int sort = 1;

	if (!ht || !ht->array)
		return;

	printf("{");
	for (tmp = ht->shead; tmp; tmp = tmp->snext)
	{
		if (sort)
		{
			sort = 0;
			printf("\'%s\': ", tmp->key);
		}
		else
			printf(", \'%s\': ", tmp->key);
		printf("\'%s\'", tmp->value);
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - prints a sorted hash table in reverse.
 * @ht: is the hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp = NULL;
	int sort = 1;

	if (!ht || !ht->array)
		return;

	printf("{");
	for (tmp = ht->stail; tmp; tmp = tmp->sprev)
	{
		if (sort)
		{
			sort = 0;
			printf("\'%s\': ", tmp->key);
		}
		else
			printf(", \'%s\': ", tmp->key);
		printf("\'%s\'", tmp->value);
	}
	printf("}\n");
}

/**
 * shash_table_delete -  deletes a sorted hash table.
 * @ht: is the hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *ptr = NULL, *tmp = NULL;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			ptr = ht->array[i];
			while (ptr)
			{
				free(ptr->key);
				free(ptr->value);
				tmp = ptr;
				ptr = ptr->next;
				free(tmp);
			}
		}
		free(ht->array);
		ht->array = NULL;
		free(ht);
	}
}
