#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to the address of the head of the list.
 *
 * Return: the size of the list that was free’d.
 */
size_t free_listint_safe(listint_t **h)
{
	int diff, nodes = 0;
	listint_t *tmp = NULL;

	if (!h && !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			tmp = *h;
			*h = (*h)->next;
			free(tmp);
		}
		else if (diff <= 0)
		{
			free(*h);
			nodes++;
			break;
		}
		nodes++;
	}
	*h = NULL;
	return (nodes);
}
