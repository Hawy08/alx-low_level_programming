#include "lists.h"

/**
* sum_listint - the sum of all the data (n) of a listint_t linked list
* Return:  the sum of all the data (n)|| 0
* @head: node
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *cur = head;

	while (cur != NULL)
	{
		sum += cur->n;
		cur = cur->next;
	}
	return (sum);

}
