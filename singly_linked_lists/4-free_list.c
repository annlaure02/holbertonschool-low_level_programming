#include "lists.h"

/**
 * free_list - free a list
 *
 * @head: pointer of a pointer
 *
 * Return: the address of the new element, or NULL if it failed
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
