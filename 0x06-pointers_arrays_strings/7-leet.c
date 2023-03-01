#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: a pointer to a string
 * Return: returns a character array
 */
char *leet(char *s)
{
char s1[] = {'A', 'E', 'O', 'T', 'L'};
char s2[] = {'a', 'e', 'o', 't', 'l'};
char rep[] = {'4', '3', '0', '7', '1'};
int i = 0, k = 0;
for (i = 0; s[i] != '\0'; i++)
{
k = 0;
while (k < 5)
{
if (s[i] == s1[k] || s[i] == s2[k])
{
s[i] = rep[k];
break;
}
k++;
}
}
return (s);
}
