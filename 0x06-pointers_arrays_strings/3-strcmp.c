#include "main.h"

/**
 * _strcmp - copies a string
 * @s1: a pointer to a string
 * @s2: a pointer to a string
 * Return: returns a -15 if s1 < s2, 15 if s1 > s2 & 0 if s1 = s2
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s2 != '\0' && (*s1 == *s2))
{
s1++;
s2++;
}
if (*s1 == *s2)
{
return (0);
}
else
{
return (*s1 - *s2);
}
}
