#include "lists.h"
/**
* add_node_end - adds new node to end of list
* @head: head of node
* @str: string (needs to be dublicate)
* Return: the address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *cur = *head;

		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = new_node;
	}
	return (new_node);
}
