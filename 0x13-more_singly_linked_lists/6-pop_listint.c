#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *               and returns the head node’s data (n)
 * @head: pointer to the first node in the list
 * Return: returns the head node’s data (n)
 *         if the linked list is empty return 0
 */


int pop_listint(listint_t **head)
{
	listint_t *temp;
	int deletedData = 0;

	if (*head == NULL)
		return (deletedData);

	if (*head == NULL)
		return (deletedData);

	temp = *head;
	deletedData = temp->n;

	*head = (*head)->next;
	free(temp);

	return (deletedData);
}
