#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: a pointer to a string
 * @src: a pointer to a sting
 * Return: returns a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int i = 0, j = 0, k = 0;
int sizedest;
int sizesrc;
int totalsize;
while (i >= 0)
{
if (dest[i] == '\0')
{
sizedest = i;
break;
}
i++;
}
i = 0;
while (i >= 0)
{
if (src[i] == '\0')
{
sizesrc = i;
break;
}
i++;
}
totalsize = sizedest + sizesrc;
j = sizedest;
while (j < totalsize)
{
dest[j] = src[k];
j++;
k++;
}
return (dest);
}
