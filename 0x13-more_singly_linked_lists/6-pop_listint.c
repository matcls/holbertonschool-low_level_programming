#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to the address of the head of the list
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *current = *head;

	if (!*head)
		return (0);

	n = current->n;
	*head = (*head)->next;
	free(current);
	return (n);
}
