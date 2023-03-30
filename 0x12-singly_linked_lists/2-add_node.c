#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - returns the number of elements in a linked list_t list
 * @head: takes in a pointer to the head of the list_t list
 * @str: takes in a string to be added to the list_t list
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	char *duplicate;
	int len;
	list_t *addresNew;

	addresNew = malloc(sizeof(list_t));
	if (addresNew == NULL)
		return (NULL);
	duplicate = strdup(str);
	if (duplicate == NULL)
	{
		free(addresNew);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	addresNew->str = duplicate;
	addresNew->len = len;
	addresNew->next = *head;

	*head = addresNew;
	return (addresNew);
}
