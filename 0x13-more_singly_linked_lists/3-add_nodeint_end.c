#include "lists.h"

/**
 * add_nodeint_end - adds a newnode node at the end of a listint_t list
 * @head: pointer to the first node in the list
 * @n: data to be inserted in the newnode node
 * Return: the address of the newnode element, or NULL if it failed
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp = *head;

	newnode = (listint_t *) malloc(sizeof(listint_t));

	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newnode;

	return (newnode);
}
