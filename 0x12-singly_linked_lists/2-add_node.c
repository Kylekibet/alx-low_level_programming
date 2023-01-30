#include "lists.h"

/**
  * add_node - adds a node to a linked list
  * @head: node to be added to
  * @str: what to add to @head
  *
  * Return: address of new node
  */
list_t *add_node(list_t **head, const char *str)
{
	char *new_str = strdup(str);
	list_t *temp = (list_t *)malloc(sizeof(list_t));

	if (temp == NULL || new_str == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->str = new_str;
	temp->len = strlen(new_str);
	temp->next = NULL;

	if (*head != NULL)
		temp->next = *head;

	*head = temp;

	return (temp);
}
