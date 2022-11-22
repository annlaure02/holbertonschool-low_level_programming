#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: pointer of a pointer
 * @idx: index of the list where the new node should be added
 * @n: data in the node
 *
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *temp;
	unsigned int i;

	newNode = malloc(sizeof(dlistint_t));
	temp = *h;
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;

	if (idx == 0)
	{
		newNode->prev = NULL;
		newNode->next = *h;
		return (newNode);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));
	else
	{
		newNode->next = temp->next;
		newNode->prev = temp;
		temp->next->prev = newNode;
		temp->next = newNode;
	}
	return (newNode);
}
