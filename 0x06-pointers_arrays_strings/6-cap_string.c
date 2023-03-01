#include "main.h"

/**
 * cap_string - changes all lowercase letters of a string to uppercase
 * @str: a pointer to a string
 * Return: returns a character array
 */
char *cap_string(char *str)
{
int i, isLower = 0;
char j;
for (i = 0; str[i] != '\0'; i++)
{
isLower = 0;
for (j = 'a'; j <= 'z'; j++)
{
if (str[0] == j)
str[0] -= 32;
if ((str[i] == ' ' || str[i] == ',' || str[i] == '\t' ||
str[i] == '\n' || str[i] == ';' || str[i] == '.' || str[i] == '!' ||
str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' ||
str[i] == '{' || str[i] == '}') && (str[i + 1] == j))
{
isLower = 1;
break;
}
}
if (isLower == 1)
str[i + 1] -= 32;
}
return (str);
}
