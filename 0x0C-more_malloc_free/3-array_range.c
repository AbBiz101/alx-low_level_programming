#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: takes in an integer number
 * @max: takes in an integer number
 * Return: the pointer to the newly created array
 *         If min > max, return NULL
 *         If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int lim = 0, i;
	int *ptr;

	if (min > max)
		return (NULL);
	lim = ((max + 1) - min);
	ptr = malloc(lim * sizeof(int));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < lim; i++)
	{
		*(ptr + i) = min + i;
	}
	return (ptr);
}
