#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: takes in a pointer to the head of the list_t list
 * @str: takes in a string to be added to the list_t list
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *duplicate;
	int len;
	list_t *addressNew, *last;

	addressNew = malloc(sizeof(list_t));
	if (addressNew == NULL)
		return (NULL);
	duplicate = strdup(str);
	if (str == NULL)
	{
		free(addressNew);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;
	addressNew->str = duplicate;
	addressNew->len = len;
	addressNew->next = NULL;

	if (*head == NULL)
		*head = addressNew;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = addressNew;
	}
	return (*head);
}
