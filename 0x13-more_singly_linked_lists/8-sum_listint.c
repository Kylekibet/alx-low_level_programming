#include "lists.h"

/**
  * sum_listint - sum all items in a linked list
  * @head: linked list to find the total sum
  *
  * Return: sum or O if list is empty
  */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
