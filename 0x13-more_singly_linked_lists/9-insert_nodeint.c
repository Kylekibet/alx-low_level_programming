#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a node at a given index.
  * @head: linked list to add node
  * @idx: index to add node
  * @n: node to be added
  *
  * Return: the address of the new node or NULL if it fails.
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head, *new;
	unsigned int index = 1;

	new = malloc(sizeof(listint_t));
	if (head == NULL || new == NULL)
		return (NULL);
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		return (new);
	}

	if (idx == 0)
	{
		new->next = temp;
		temp = new;
		return (new);
	}
	while (index < idx)
	{
		index++;
		temp = temp->next;
	}

	new->next = temp->next;
	temp->next = new;

	return (new);
}
