#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * linked list
 *
 * @head: pointer of a pointer
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *delNode;
	unsigned int i;
	
	temp = *head;
	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
	}
	delNode = temp->next;
	temp->next = delNode->next;
	free(delNode);
	free(temp);

	return (1);
}
