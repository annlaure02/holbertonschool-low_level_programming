#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 *
 * @head: pointer of a pointer
 * @str: string
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	char *dup;
	int nlen;

	dup = strdup(str);
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	if (dup == NULL)
	{
		free(newNode);
		return (NULL);
	}
	for (nlen = 0; str[nlen]; nlen++)
	{
	}
	newNode->str = dup;
	newNode->len = nlen;
	newNode->next = *head;
	*head = newNode;
	return(newNode);
}
