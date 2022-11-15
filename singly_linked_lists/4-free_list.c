#include "lists.h"

/**
 * free_list - free a list
 *
 * @head: pointer of a pointer
 *
 * Return: 
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		free(head->str);
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
