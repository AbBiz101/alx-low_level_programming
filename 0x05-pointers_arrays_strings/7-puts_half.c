#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: a pointer to a character
 *
 * Return: returns nothing
 */
void puts_half(char *str)
{
int i = 0;
int size;
while (i >= 0)
{
if (str[i] == '\0')
{
size = i;
break;
}
i++;
}
if (size % 2 == 0)
{
i = size / 2;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
}
else
{
i = (size / 2) + 1;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
}
_putchar('\n');
}
