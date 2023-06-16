#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given index
 * in a given position doubly linked list
 *
 * @h: Head of the list or pointer to list
 * @idx: the index of the node to insert.
 * @n: data to insert or the value to be stored in the NEW_NODE
 *
 * Return: the address of the New_Node or NULL if it failed.
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *New_Node;
	dlistint_t *tmp = *h;
	unsigned int x;

	New_Node = malloc(sizeof(dlistint_t));
	if (!New_Node || !h)
		return (NULL);
	New_Node->n = n;
	New_Node->next = NULL;
	if (idx == 0)
		return (add_dnodeint(h, n));
	for (x = 0; tmp && x < idx; x++)
	{
		if (x == idx - 1)
		{
			if (tmp->next == NULL)
				return (add_dnodeint_end(h, n));
			New_Node->next = tmp->next;
			New_Node->prev = tmp;
			tmp->next->prev = New_Node;
			tmp->next = New_Node;
			return (New_Node);
		}
		else
			tmp = tmp->next;
	}
	return (NULL);
}
