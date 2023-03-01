#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: a pointer to a string
 * @src: a pointer to a sting
 * @n: takes in an integer for the utmost section to concatenate
 * Return: returns a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0, k = 0, count = 0;
int sizedest, sizesrc, totalsize;
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
if (n < sizedest)
{
count = 0;
while (count < n && j < totalsize)
{
dest[j++] = src[k++];
count++;
}
}
else
{
while (j < totalsize)
{
dest[j++] = src[k++];
}
}
return (dest);
}
