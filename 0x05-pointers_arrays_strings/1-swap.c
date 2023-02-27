#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: a pointer to the integer we want to swap
 * @b: a pointer to the integer we want to swap
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
