#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head of the dlistint_t list.
 * @idx: index of the list where the new node should be added.
 * @n: data of the node.
 * Return:  the address of the new node, or NULL if it failed.
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *new = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (!current)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	while (--idx && current->next)
		current = current->next;

	if (idx)
		return (NULL);

	new->n = n;
	new->prev = current;
	new->next = current->next;
	if (current->next)
		current->next->prev = new;
	current->next = new;
	return (new);
}
