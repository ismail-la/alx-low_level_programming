#include "lists.h"

/**
 * pop_listint - deletes the head node of the
 * the linked list
 * @head: head of a list
 *
 * Return: a head node's data
 */


int pop_listint(listint_t **head)
{
	int node;
	listint_t *h;
	listint_t *bir;

	if (*head == NULL)
		return (0);

	bir = *head;

	hnode = bir->n;

	h = bir->next;

	free(bir);

	*head = h;

	return (node);
}
