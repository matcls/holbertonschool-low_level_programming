#include "lists.h"

/**
 * listint_len -  returns the number of elements in a linked listint_t list.
 * @h: pointer to the list
 *
 * Return: the number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	if (h)
	{
		return (listint_len(h->next) + 1);
	}
	return (0);
}
