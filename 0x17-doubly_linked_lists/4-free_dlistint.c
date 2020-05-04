#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: head of the dlistint_t list.
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
