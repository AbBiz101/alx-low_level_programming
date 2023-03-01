#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: a pointer to a string
 * Return: returns a character array
 */
char *string_toupper(char *str)
{
int i, isLower = 0;
char j;
for (i = 0; str[i] != '\0'; i++)
{
isLower = 0;
for (j = 'a'; j <= 'z'; j++)
{
if (str[i] == j)
{
isLower = 1;
break;
}
}
if (isLower == 1)
str[i] -= 32;
}
return (str);
}
