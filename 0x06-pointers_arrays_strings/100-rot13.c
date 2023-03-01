#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: pointer to a string
 * Return: a pointer to the string
 */
char *rot13(char *s)
{
char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
j = 0;
while (input[j] != '\0')
{
if (s[i] == input[j])
{
s[i] = output[j];
break;
}
j++;
}
}
return (s);
}
