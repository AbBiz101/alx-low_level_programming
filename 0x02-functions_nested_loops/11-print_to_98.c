#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from num to 98
 * @num: takes a number
 * Return: always 0
 */
void print_to_98(int num)
{
int i;
if (num > 98)
{
for (i = num; i >= 98; i--)
{
printf("%d", i);
if (i != 98)
printf(", ");
}
}
else
{
for (i = num; i <= 98; i++)
{
printf("%d", i);
if (i != 98)
printf(", ");
}
}
printf("\n");
}
