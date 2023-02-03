#include "lists.h"

/**
  * add_nodeint - adds a int at the beginning of a list
  * @head: linked list to be added.
  * @n: int to add to linked list
  *
  * Return: address of the new element or NULL if failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = (listint_t *)malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);

}
