#include "lists.h"

/**
 * free_listint2 - free a list
 *
 * @head: pointer of a pointer
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		free(*head);
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

}
