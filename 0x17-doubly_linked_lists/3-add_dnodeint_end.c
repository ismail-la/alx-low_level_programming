#include "lists.h"

/**
 * add_dnodeint_end - adds a New_Node node at the end of
 * a doubly linked list
 * @head: double pointer to the list
 * @n: value of the element or data to insert in the New_Node node
 * Return: the address of the New_Node element or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp;
	dlistint_t *New_Node;

	if (head == NULL)
		return (NULL);

	New_Node = malloc(sizeof(dlistint_t));

	if (!New_Node)
		return (NULL);

	New_Node->n = n;
	New_Node->next = NULL;

	if (*head == NULL)
	{
		New_Node->prev = NULL;
		*head = New_Node;
		return (New_Node);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;

	tmp->next = New_Node;
	New_Node->prev = tmp;
	return (New_Node);
}
