#include "lists.h"

/**
* print_listint - prints all the elements of a list.
* @h: head of a list for the linked list.
*
* Return: the numbers of the nodes.
*/
size_t print_listint(const listint_t *h)
{
    size_t numnode = 0;
      while (h != NULL)
	{
	    printf("%d\n", h->n);
	    h = h->next;
	    numnode++;
	}
   return (numnode);
}
