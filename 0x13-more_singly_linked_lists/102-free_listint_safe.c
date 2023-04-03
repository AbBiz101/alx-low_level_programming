#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the first node in the list
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp, *actual = *h;
	size_t listSizeFreed = 0;
	int rest;

	while (actual)
	{
		rest = actual - actual->next;
		if (rest > 0)
		{
			temp = actual->next;
			free(actual);
			actual = temp;
			listSizeFreed++;
		} else
		{
			free(actual);
			*h = NULL;
			listSizeFreed++;
			break;
		}

	}

	*h = NULL;

	return (listSizeFreed);
}
