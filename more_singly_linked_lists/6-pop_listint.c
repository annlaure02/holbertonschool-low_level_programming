#include "lists.h"

/**
 * pop_listint - Delete the head node of a listint_t linked list
 *
 * @head: pointer of a pointer
 *
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return (0);

	else
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		temp = NULL;
	}
	return ((*head)->n);
}
