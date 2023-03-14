#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific
 * char
 * @size: takes in an unsigned integer number
 * @c: takes in a character
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ch;

	if (size == 0)
	{
		return (0);
	}
	else
	{
		ch = (char *)malloc(size * sizeof(char));
		if (ch == 0)
			return (0);
		for (i = 0; i < size; i++)
		{
			ch[i] = c;
		}
	}
	return (ch);
}
