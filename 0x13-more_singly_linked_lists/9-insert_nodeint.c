#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node in the list
 * @idx: is the index of the list where the new node should be added.
 *       Index starts at 0
 * @n: the number to be inserted
 * Return: the address of the new node, or NULL if it failed
 *         if it is not possible to add the new node at index idx,
 *         do not add the new node and return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *temp = *head;
	unsigned int nodeCount;

	nodeCount = 0;
	while (temp && nodeCount < idx - 1)
	{
		temp = temp->next;
		nodeCount++;
	}

	newNode = malloc(sizeof(listint_t));
	if (newNode != NULL)
	{
		newNode->n = n;
		if (idx == 0)
		{
			newNode->next = *head;
			*head = newNode;
			return (newNode);
		}
		if (nodeCount + 1 == idx)
		{
			newNode->next = temp->next;
			temp->next = newNode;
			return (newNode);
		}
	}
	free(newNode);
	return (NULL);
}
