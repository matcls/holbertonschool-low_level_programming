#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to the address of the head of the list
 * @n: value to add to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tail = *head;
	listint_t *newnode = malloc(sizeof(listint_t));

	if (!newnode)
		return (NULL);

	newnode->n = n;

	if (!*head)
		*head = newnode;
	else
	{
		while (tail->next)
			tail = tail->next;

	tail->next = newnode;
	}

	newnode->next = NULL;

	return (newnode);
}
