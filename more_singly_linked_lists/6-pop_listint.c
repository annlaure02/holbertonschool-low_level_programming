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
	int tempn;

	if (*head == NULL)
		return (0);

	tempn = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (tempn);
}
