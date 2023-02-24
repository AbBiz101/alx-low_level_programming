#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: is the size of the triangle
 * Return: a triangle
 */
void print_triangle(int size)
{
int i, j, k;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = size; i >= 1; i--)
{
for (j = 1; j < i; j++)
{
_putchar(' ');
}
for (k = size; k >= i; k--)
{
_putchar('#');
}
_putchar('\n');
}
}
}
