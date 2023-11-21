#include "lists.h"
/**
* delete_nodeint_at_index - delete nodeint at index
* Return: 1 if it succeeded, -1 if it failed
* @head: node
* @index: index
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *temp = NULL;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	for (i = 0; i < index && current != NULL; i++)
	{
		temp = current;
		current = current->next;
	}

	if (current == NULL)
	{
		return (-1);
	}

	temp->next = current->next;
	free(current);

	return (1);

}
