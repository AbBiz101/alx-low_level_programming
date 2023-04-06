#include "main.h"
#include <stdio.h>
/**
 * print_binary - is a function that prints the binary version of a number
 * @n: is the number input
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int mask = 1UL << 63;

	for (i = 0; i < 64; i++)
	{
		if (n & mask)
			putchar('1');
		else
			putchar('0');

		mask >>= 1;
	}

	putchar('\n');
}
