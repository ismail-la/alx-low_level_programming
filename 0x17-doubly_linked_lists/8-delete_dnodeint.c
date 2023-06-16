#include "lists.h"

/**
 * dlistint_len - returns the number of the Nodes in a doubly linked list.
 *
 * @h: pointer to the list.
 *
 * Return: number of Nodes.
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t Nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		Nodes++;
		h = h->next;
	}
	return (Nodes);
}

/**
 * delete_dnodeint_at_index - deltes the node in a doubly linked list
 * at a given index.
 *
 * @head: head of the list or double pointer to the list
 * @index: the index of the node to delete.
 *
 * Return: 1 on success, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int x;

	if (*head == NULL || dlistint_len(tmp) < index + 1)
		return (-1);

	if (!index)
	{
		(*head) = tmp->next;
		if (tmp->next)
			tmp->next->prev = NULL;
		tmp->next = NULL;
		free(tmp);
		return (1);
	}

	for (x = 0; x < index; x++)
		tmp = tmp->next;

	tmp->prev->next = tmp->next;
	if (tmp->next)
		tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
