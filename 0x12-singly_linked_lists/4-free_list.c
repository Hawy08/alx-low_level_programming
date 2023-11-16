#include "lists.h"
/**
 * free_list - a function that frees a list_t list.
 * @head: head
*/

void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *temp = head;

		head = head->next;
		free(temp->str);
		free(temp);
	}

}
