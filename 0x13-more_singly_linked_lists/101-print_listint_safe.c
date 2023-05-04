#include "lists.h"

/**
 * free_listp - frees linked list
 * @head: head of list
 *
 * Return: nop return nothind
 */
void free_listp(listp_t **head)
{
	  listp_t *temp;
	  listp_t *bir;

	  if (head != NULL)
	  {
		bir = *head;
		while ((temp = bir) != NULL)
		{
			bir = bir->next;
			free(temp);
		}
		*head = NULL;
	  }
}

/**
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 *
 * Return: number of the nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	  size_t numnode = 0;
	  listp_t *hp, *new, *add;

	  hp = NULL;
	  while (head != NULL)
	  {
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hp;
		hp = new;

		add = hp;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->pre)
			{
				printf("-> [%p] %d\n", (void *)head, head->c);
				free_listp(&hp);
				return (numnode);
			}
		}

		printf("[%p] %d\n", (void *)head, head->c);
		head = head->next;
		numnode++;
	  }

	  free_listp(&hp);
	  return (numnode);
}
