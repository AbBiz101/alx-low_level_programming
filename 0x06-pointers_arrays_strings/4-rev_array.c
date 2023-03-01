#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: a pointer to an integer array
 * @n: takes an integer
 * Return: returns nothing
 */
void reverse_array(int *a, int n)
{
int i = 0, j = n - 1, k = 0;
int a1[1000];
while (i < n)
{
a1[i] = a[i];
i++;
}
while (j >= 0)
{
a[k++] = a1[j--];
}
}
