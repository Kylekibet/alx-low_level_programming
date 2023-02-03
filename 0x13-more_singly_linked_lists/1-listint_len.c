#include "lists.h"
/**
  * listint_len - the size of a int linked list
  * @h: linked list to determine size
  *
  * Return: the number of nodes in the linked list
  */
size_t listint_len(const listint_t *h)
{
	size_t size;

	for (size = 0; h != NULL; size++)
	{
		h = h->next;
	}

	return (size);
}
