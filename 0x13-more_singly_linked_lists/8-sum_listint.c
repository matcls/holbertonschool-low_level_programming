#include "lists.h"

/**
 * sum_listint - sums of all the data (n) of a listint_t linked list.
 * @head: pointer to the list.
 *
 * Return: the sum of all the data, 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	for (sum; head; sum += head->n, head = head->next)
		;
	return (sum);
}
