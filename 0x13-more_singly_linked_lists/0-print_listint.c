#include "lists.h"
/**
  * print_listint - print linked list of ints
  * @h: linked list to print
  *
  * Return: the number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t size;

	for (size = 0; h != NULL; size++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (size);
}
