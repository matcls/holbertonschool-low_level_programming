#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: index of the node, starting at 0
 * @index: index of the node to return.
 *
 * Return: the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node_count = 0;

	while (node_count < index)
	{
		if (!head)
			return (NULL);

		head = head->next;
		node_count++;
	}

	return (head);
}
