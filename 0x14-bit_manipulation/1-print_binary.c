#include "main.h"
#include <stdio.h>
/**
 * print_binary - is a function that prints the binary version of a number
 * @n: is the number input
 * Return: void
 */
void print_binary(unsigned long int n)
{
int shift = sizeof(unsigned long int) * 8 - 1;
unsigned long int mask = 1UL << shift;
int printed = 0;
while (mask > 0)
{
if (n & mask)
{
putchar('1');
printed = 1;
}
else if (printed)
{
putchar('0');
}
mask >>= 1;
}
if (!printed)
putchar('0');
}
