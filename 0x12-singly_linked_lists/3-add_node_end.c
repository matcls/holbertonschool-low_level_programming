#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to the address of the first element
 * @str: string to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t lenght = 0;
	list_t *newnode = NULL;
	list_t *tmp = *head;

	if (!head)
		return (NULL);

	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);

	while (str[lenght])
		lenght++;

	newnode->str = strdup(str);
	newnode->len = lenght;
	newnode->next = NULL;

	if (!(*head))
	{
		*head = newnode;
		return (newnode);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = newnode;

	return (*head);
}
