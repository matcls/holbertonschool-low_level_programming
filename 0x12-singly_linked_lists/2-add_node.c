#include "lists.h"
#include <string.h>


/**
 * add_node - adds a new node at the beginning of a list_t list
 * @
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t tmp;
	char *struc = strdup(str);

	list_t *newnode = (list_t *)malloc(sizeof(list_t));

	if (!newnode)
		return (NULL);

	while (str[temp])
		temp++;

	newnode->str = struc;
	newnode->len = tmp;
	newnode->next = *head;
	*head = newnode;

	return (*head);

}
