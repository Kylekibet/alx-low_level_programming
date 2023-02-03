#include "lists.h"

/**
  * get_nodeint_at_index - gets a node at given index
  * @head: list to check for index
  * @index: index to check
  *
  * Return: node of found index if it doesn't exits return NULL.
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int size;

	if (head == NULL)
		return (NULL);

	temp = head;

	for (size = 0; size <= index && temp != NULL; size++)
	{
		if (size == index)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}
