#include "lists.h"
#include <string.h>


/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the address of the first element
 * @str: string to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t node = 0;
	list_t *newnode = NULL;

	if (!head)
		return (NULL);

	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);

	while (str[node])
		node++;

	newnode->str = strdup(str);
	newnode->len = node;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}

