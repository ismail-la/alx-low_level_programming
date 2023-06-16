#include "lists.h"

/**
 * add_dnodeint - adds a New_Node node at the beginning
 * of a doubly linked list
 * @head: double pointer to the list
 * @n: value of the element or data to insert in the New_Node node
 * Return: the address of the New_Node element
 *
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *New_Node;

	if (head == NULL)
		return (NULL);

	New_Node = malloc(sizeof(dlistint_t));

	if (New_Node == NULL)
		return (NULL);

	New_Node->n = n;
	New_Node->next = *head;
	New_Node->prev = NULL;

	if (*head)
		(*head)->prev = New_Node;

	*head = New_Node;

	return (New_Node);
}
