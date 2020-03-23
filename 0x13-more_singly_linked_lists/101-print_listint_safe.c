#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the list to be printed
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ymp = malloc(sizeof(listint_t));

	if (!ymp)
		exit(98);

	if (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		if (head > head->next)
			return (print_listint_safe(head->next) + 1);
		else if (!(head > head->next))
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			return (1);
		}
	}
	return (0);
}
