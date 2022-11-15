#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 *
 * @head: pointer of a pointer
 * @str: string
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	char *dup;
	int nlen;

	dup = strdup(str);
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	for (nlen = 0; str[nlen]; nlen++)
	{
	}
	newNode->str = dup;
	newNode->len = nlen;
	newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;
	else
	{
		list_t *lastNode = *head;

		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newNode;
	}
	return (newNode);
}
