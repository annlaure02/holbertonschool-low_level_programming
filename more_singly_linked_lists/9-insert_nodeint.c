#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: pointer of a pointer
 * @idx: index of the list where the new node should be added
 * @n: data in the node
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *temp;
	unsigned int i;

	newNode = malloc(sizeof(listint_t));
	temp = *head;
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}
	newNode->next = temp->next;
	temp->next = newNode;

	return (newNode);
}
