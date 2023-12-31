#include "lists.h"

/**
* add_node - adds a new node
* @head: head
* @str: string (needs to be dublicated)
* Return: the address of the new element, or NULL if it failed
*/


list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t new_len;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_len = strlen(str);

	new_node->next = *head;

	*head = new_node;

	new_node->len = new_len;

	return (new_node);

}
