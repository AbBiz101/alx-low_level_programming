#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: a pointer to a string
 * @src: a pointer to a sting
 * @n: takes in an integer for the utmost section to copy
 * Return: returns a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int j = 0, k = 0;
while (j < n && src[k] != '\0')
{
dest[j++] = src[k++];
}
for ( ; j < n; j++)
{
dest[j] = '\0';
}
return (dest);
}
