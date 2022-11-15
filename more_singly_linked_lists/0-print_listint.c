#include "lists.h"

/**
 * print_listint - Print all the elements of a list_t list
 *
 * @h: pointer to head
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		if (h->n != '\0')
			printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
