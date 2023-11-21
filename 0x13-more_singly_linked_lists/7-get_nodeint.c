#include "lists.h"

/**
* get_nodeint_at_index -  the nth node of a listint_t linked list
* @head: node
* @index: index
* Return:  the nth node of a listint_t linked list || 0
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	listint_t *cur = head;

	for (i = 0; cur != NULL && i < index; i++)
	{
		cur = cur->next;
	}

	return (cur);

}
