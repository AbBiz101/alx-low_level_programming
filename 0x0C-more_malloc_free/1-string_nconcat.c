#include "main.h"
#include <stdlib.h>

/**
 * stringLength - calculate and return string length
 * @str: a pointer to a string
 * Return: the length of the string
 */

int stringLength(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: takes in a pointer to a string
 * @s2: takes in a pointer to a string
 * @n: takes in an unsigned integer
 * Return: shall point to a newly allocated space in memory, which contains s1
 *         followed by the first n bytes of s2, and null terminated
 *         If the function fails, it should return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int num = n, length, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);
	if (num >= stringLength(s2))
		num = stringLength(s2);
	length = stringLength(s1) + num + 1;
	ptr = malloc(sizeof(*ptr) * length);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < num; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';
	return (ptr);
}
