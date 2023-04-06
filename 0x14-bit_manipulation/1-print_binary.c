#include "main.h"
#include <stdio.h>
/**
 * print_binary - is a function that prints the binary version of a number
 * @n: is the number input
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, flag = 0;
	for (i = 63; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			putchar('1');
			flag = 1;
		}
		else if (flag)
			putchar('0');
	}
	if (!flag)
		putchar('0');
	putchar('\n');
}
