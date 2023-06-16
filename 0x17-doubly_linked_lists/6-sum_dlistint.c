#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data in a
 * doubly linked list (dlistint_t)
 * @head: a pointer to the list
 *
 * Return: the sum of the data or 0 otherwise
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
