#include "lists.h"
/**
* insert_nodeint_at_index - insert nodeint at index
* Return: the address of the new node, or NULL if it failed
* @head: node
* @idx: index
* @n: num
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
    listint_t *new_node;
    unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;

	for (i = 0; i < idx - 1 && current != NULL; i++)

	{
		current = current->next;
	}

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

    new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);

}
