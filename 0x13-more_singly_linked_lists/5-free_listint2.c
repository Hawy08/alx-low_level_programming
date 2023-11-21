#include "lists.h"

/**
* free_listint2 - frees a listint_t list.
* @head: node
*/

void free_listint2(listint_t **head)
{
	listint_t *cur, *temp;

	if (head == NULL || *head == NULL)
	{
		return;
	}

	cur = *head;

	while (cur != NULL)
	{
		temp = cur;
		cur = cur->next;
		free(temp);
	}
	*head = NULL;

}
