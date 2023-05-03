#include "lists.h"

/**
 * delete_nodeint_at_index - delet the node at a index
 * off a linked list
 * @head: head of a list.
 * @index: index of list where the node is deleted.
 *
 * Return: 1 (Success) if it succeeded, -1 (Fail) if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *preev;
	listint_t *next;
	preev = *head;


	if (index != 0)
	{
	   for (i = 0; i < index - 1 && preev != NULL; i++)
	     {
			preev = preev->next;
	     }
	}


	if (preev == NULL || (preev->next == NULL && index != 0))
	{
		return (-1);
	}


	next = preev->next;

	if (index != 0)
	{
		preev->next = next->next;
		free(next);
	}
	else
	{
		free(preev);
		*head = next;
	}



	return (1);
}
