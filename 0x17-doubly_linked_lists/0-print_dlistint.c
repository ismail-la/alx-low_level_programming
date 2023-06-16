#include "lists.h"

/**
 * print_dlistint - print the elements
 * of doubly linked list
 * @h: the head of list
 * Return: number of nodes
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
	count = 0;
	int count;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
