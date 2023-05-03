#include "lists.h"

/**
 * reverse_listint - reverses linked list.
 * @head: head of the list
 *
 * Return: pointer to the first node in new listt
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre;
	listint_t *c;

	pre = NULL;
	c = NULL;

	while (*head != NULL)
	{
		c = (*head)->next;
		(*head)->next = pre;
		pre = *head;
		*head = c;
	}

	*head = pre;
	return (*head);
}
