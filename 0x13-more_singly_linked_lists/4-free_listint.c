#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the first node in the list
 * Return: returns nothing
 */


void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != 0)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
