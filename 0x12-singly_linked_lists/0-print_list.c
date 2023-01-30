#include "lists.h"

/**
  * print_list - prints linked list to stdout
  * @h: list to be printed
  *
  * Return: the total number of items in @h.
  */

size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		x++;
		h = h->next;
	}

	return (x);
}
