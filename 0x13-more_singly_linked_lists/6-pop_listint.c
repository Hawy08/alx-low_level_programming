#include "lists.h"

/**
* pop_listint -  deletes the head node of a listint_t linked list
* @head: node
* Return: the head node’s data (n) and 0 when empty
*/

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}



	temp = *head;
	*head = (*head)->next;

	data = temp->n;

	free(temp);

	return (data);

}
