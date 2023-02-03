#include "lists.h"

/**
  * add_nodeint_end - adds node at the end of a linked list
  * @head: linked list to add node
  * @n: int to add to @head
  *
  * Return: address of the new element or NULL if failed.
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *last;

	temp = (listint_t *)malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = temp;
	}

	return (temp);
}
