#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter
 * @str: a pointer to a string
 * Return: returns a pointer to the duplicated string,
 *         It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *ch;
	int i, j, size = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; str[j] != '\0'; j++)
		{
			size++;
		}
		ch = malloc((size * sizeof(char)) + 1);

		if (ch == NULL)
			return (NULL);
		for (i = 0; i < size; i++)
		{
			ch[i] = str[i];
		}
	}
	return (ch);
}
