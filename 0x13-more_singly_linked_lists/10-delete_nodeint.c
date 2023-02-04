#include "lists.h"

/**
  * delete_nodeint_at_index - delete a node at a given index
  * @head: list to remove node
  * @index: index of node to remove
  *
  * Return: 1 if successful and -1 if failed
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *current;
	unsigned int x;

	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (x = 0; x < (index - 1); x++)
	{
		if (temp->next == NULL)
			return -1;
		temp = temp->next;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);
	return (1);
}
