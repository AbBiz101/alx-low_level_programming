#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: a pointer to an integer
 * @n: takes an integer
 * Return: returns nothing
 */
void print_array(int *a, int n)
{
int j = 0;
while (j < n)
{
printf("%d", a[j]);
if (j != n - 1)
printf(", ");
j++;
}
printf("\n");
}
