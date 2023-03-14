#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: takes in an integer
 * @height: takes in an integer
 * Return: a pointer to a 2 dimensional array of integers,
 *         other wise NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int wIndex = 0, hIndex = 0, **arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		arr = (int **)malloc(height * sizeof(int *));
		if (arr == NULL)
			return (NULL);
		for (hIndex = 0; hIndex < height; hIndex++)
		{
			arr[hIndex] = malloc(width * sizeof(int));
			if (arr[hIndex] == NULL)
			{
				for (; hIndex >= 0; hIndex--)
					free(arr[hIndex]);
				free(arr);
				return (NULL);
			}
		}
		for (hIndex = 0; hIndex < height; hIndex++)
		{
			for (wIndex = 0; wIndex < width; wIndex++)
			{
				arr[hIndex][wIndex] = 0;
			}
		}
	}
	return (arr);
}
