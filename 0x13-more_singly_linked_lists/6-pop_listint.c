#include "lists.h"

/**
  * pop_listint - remove first item of a linked list
  * @head: list to remove first item
  *
  * Return: the first item of a node.
  */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (n);
}
