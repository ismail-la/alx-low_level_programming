#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of the unique nodess
 * in a looped listint_t linked list
 * @head: A pointer to the head of listint_t to check
 *
 * Return: If the list is not looped - 0
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *bary, *baty;
	size_t numnode = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	bary = head->next;
	hare = (head->next)->next;

	while (baty)
	{
		if (bary == baty)
		{
			bary = head;
			while (bary != baty)
			{
				numnode++;
				bary = bary->next;
				baty = baty->next;
			}

			bary = bary->next;
			while (bary != baty)
			{
				numnode++;
				bary = bary->next;
			}

			return (numnode);
		}

		bary = bary->next;
		baty = (baty->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t numnode, index = 0;

	numnode = looped_listint_len(head);

	if (numnode == 0)
	{
		for (; head != NULL; numnode++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < numnode; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (numnode);
}
