#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: takes in an unsigned integer number
 * @size: takes in an integer number
 * Return: returns a pointer to the allocated memory
 *         If nmemb or size is 0, then _calloc returns NULL
 *         If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(ptr) + i) = 0;
	}
	return (ptr);
}
