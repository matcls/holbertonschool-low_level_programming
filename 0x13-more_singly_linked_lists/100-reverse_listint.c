#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to the address of the head of the list.
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = NULL, *next = NULL;

	if (!*head)
		return (NULL);

	current = *head;

	while (current->next)
	{
		next = current->next;
		current->next = next->next;
		next->next = *head;
		*head = next;
	}
	return (*head);
}
