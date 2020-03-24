#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *turtle = NULL, *hare = NULL;
	int length = 1, power = 1;

	if (!head)
		return (NULL);

	turtle = head, hare = head->next;

	while (hare && hare != turtle)
	{
		if (length == power)
		{
			power *= 2;
			length = 0;
			turtle = hare;
		}
		hare = hare->next;
		++length;
	}
	if (!hare)
	    return(NULL);

	turtle = head, hare = head;
	while (length > 0)
	{
		hare = hare->next;
		--length;
	}
	while (hare !=turtle)
	{
		hare = hare->next;
		turtle = turtle->next;
	}
	return (turtle);
}

