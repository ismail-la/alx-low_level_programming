#include "lists.h"
/**
 * listint_len - returns of the number of elements in
 * the linked list.
 * @h: head of a list for linked list.
 *
 * Return: numbers of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t numnode = 0;

	while (h != NULL)
	{
		h = h->next;
		numnode++;
	}
	return (numnode);
}
