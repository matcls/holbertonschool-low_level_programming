#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head of the dlistint_t list.
 * @index: the index of the node, starting from 0
 * Return: the index node, if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head && index)
		return (get_dnodeint_at_index(head->next, index - 1));

	return (head);
}
