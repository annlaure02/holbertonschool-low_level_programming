#include "lists.h"

/**
 * listint_len- returns the number of elements in a linked listint_t list.
 *
 * @h: pointer to head
 *
 * Return: the number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
