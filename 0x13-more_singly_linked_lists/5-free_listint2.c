#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to the address of the head of the list
 */
void free_listint2(listint_t **head)
{
	if(!head)
		return;

	if (*head)
	{
		free_listint2(&(*head)->next);
		free(*head);
		*head = NULL;
	}
}
