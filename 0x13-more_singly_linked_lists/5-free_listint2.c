#include "lists.h"

/**
  * free_listint2 - releases spaces created for listint_t
  * @head: linked list to create space
  */

void free_listint2(listint_t **head)
{
	listint_t  *temp;

	if (head == NULL)
		return;

	temp = *head;
	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
