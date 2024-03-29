#include "lists.h"

/**
  * list_len - get length of linked list
  * @h: list of items to be counted
  *
  * Return: the total number of items in @h.
  */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
