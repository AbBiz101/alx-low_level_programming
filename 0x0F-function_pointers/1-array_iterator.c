#include <stdio.h>

/**
 * array_iterator - executes a function given
 *                  as a parameter on each element of an array
 * @array: a pointer to an integer
 * @size: takes in the size of the array
 * @action: a pointer to a function
 * Return: returns nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(*(array + i));
		}
	}
}
