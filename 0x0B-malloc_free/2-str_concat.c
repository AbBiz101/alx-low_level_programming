#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: a pointer to a string
 * @s2: a pointer to a string
 * Return: returns the contents of s1, followed
 * by the contents of s2, and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	char *ch;
	int i, j, sizeS1 = 0, sizeS2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (j = 0; s1[j] != '\0'; j++)
	{
		sizeS1++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		sizeS2++;
	}
	ch = malloc(((sizeS1 + sizeS2 + 1) * sizeof(char)));
	if (ch == NULL)
		return (NULL);
	for (i = 0; i < sizeS1; i++)
	{
		ch[i] = s1[i];
	}
	for (j = 0; j < sizeS2; j++)
	{
		ch[i] = s2[j];
		i++;
	}
	return (ch);
}
