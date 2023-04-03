#include "lists.h"
size_t listint_len(const listint_t *h);

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list
 * @head: pointer to the first node in the list
 * @index: the index of the node, starting at 0
 * Return: returns the nth node
 *         if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *currentNode;
	unsigned int countNode;

	currentNode = head;
	countNode = listint_len(head);

	if (currentNode == NULL)
		countNode++;

	if (countNode <= index)
	{
		return (NULL);
	}
	else
	{
		countNode = 0;
		while (currentNode != NULL)
		{
			if (countNode == index)
			{
				break;
			}
			else
			{
				countNode++;
				currentNode = currentNode->next;
			}
		}
		return (currentNode);
	}
}

/**
 * listint_len - returns the number of elements in a linked list_t list
 * @h: a pointer to the list
 * Return: returns the number of elements
 */

size_t listint_len(const listint_t *h)
{
	int countNode;

	countNode = 0;
	while (h != NULL)
	{
		h = h->next;
		countNode++;
	}
	return (countNode);
}
