#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: a pointer to a character
 *
 * Return: returns nothing
 */

void print_rev(char *s)
{
char *s = "Hello,  world!";
int i = 0;
int j;
int size;
while (i >= 0)
{
if (s[i] == '\0')
{
j = i;
break;
}
i++;
}
while (j >= 0)
{
putchar(s[j]);
j--;
}
putchar('\n');
}
