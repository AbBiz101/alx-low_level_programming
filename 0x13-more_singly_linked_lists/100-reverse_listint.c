#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the first node in the list
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *currentNode;

	temp = NULL;
	currentNode = NULL;
	while (*head != NULL)
	{
		currentNode = *head;
		*head = (*head)->next;
		currentNode->next = temp;
		temp = currentNode;
	}
	*head = currentNode;

	return (*head);
}
