#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - locates a substring
 * @a: a pointer to an integer
 * @size: an integer parameter
 * Return: prints the sum of the two diagonals of a square matrix of integers
 */

void print_diagsums(int *a, int size)
{
	int sumR = 0, sumL = 0, i;

	for (i = 0; i < size; i++)
	{
		sumR += a[i];
		sumL += a[size - i - 1];
		a += size;
	}

	printf("%d, ", sumR);
	printf("%d\n", sumL);
}
