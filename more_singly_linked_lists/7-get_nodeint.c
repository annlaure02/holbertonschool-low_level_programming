#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head: pointer to head
 * @index: index of the node
 *
 * Return: the nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nthNode = head;
	unsigned int i;

	if (nthNode == NULL)
		return (NULL);
	for (i = 0; i < index && nthNode != NULL; i++)
	{
		nthNode = nthNode->next;
	}
	return (nthNode);
}
