#include "lists.h"

/**
 * free_listint2 - frees a linked a list
 * @head: head of the list
 *
 * Return: no return
 */


void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *bir;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = bir) != NULL)
		{
			bir = bir->next;
			free(temp);
		}
		*head = NULL;
	}
}
