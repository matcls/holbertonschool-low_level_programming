#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position. 
 * @head: pointer to the address of the head of the list.
 * @idx: the index of the list where the new node should be added.
 * @n: value to add to the new node.
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;

	if (!head)
		return (NULL);
	if (*head)
		return (insert_nodeint_at_index(&(*head)->next, idx - 1, n));
	if (idx)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
