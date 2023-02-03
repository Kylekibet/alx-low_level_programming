#include "lists.h"

/**
  * free_listint - releases spaces created for listint_t
  * @head: linked list to create space
  */

void free_listint(listint_t *head)
{
	listint_t  *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
