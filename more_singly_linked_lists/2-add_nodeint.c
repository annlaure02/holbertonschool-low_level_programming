#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 *
 * @head: pointer of a pointer
 * @n: data in the node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
