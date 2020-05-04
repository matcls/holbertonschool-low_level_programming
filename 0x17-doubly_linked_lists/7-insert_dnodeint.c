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
	dlistint_t *new = NULL, *current = *h;
	unsigned int i = 0;

	if (idx == 0 || *h == NULL)
		return (add_dnodeint(h, n));
	if (idx > 0 && *h == NULL)
		return (NULL);
	while (i < idx && current->next != NULL)
	{
		current = current->next;
		i++;
	}
	if (current->next == NULL && i + 1 == idx)
		return (add_dnodeint_end(h, n));
	else if (i + 1 < idx)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = current->prev;
	new->next = current;
	current->prev->next = new;
	current->prev = new;
	return (current);
}
