#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index
 * of a dlistint_t linked list.
 * @head: head of the dlistint_t list.
 * @index: index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = NULL;
	unsigned int i;

	if (!head || !(*head))
		return (-1);

	for (i = 0, tmp = *head; i < index && tmp; i++, tmp = tmp->next)
		continue;
	if (!tmp)
		return (-1);
	
	if (tmp == *head)
		*head = tmp->next;
	
	if (tmp->prev)
		tmp->prev->next = tmp->next;
	
	if (tmp->next)
		tmp->next->prev = tmp->prev;
	
	free(tmp);
	return (1);
}
