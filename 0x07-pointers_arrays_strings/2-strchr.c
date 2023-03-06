#include "main.h"
#include <stddef.h>

/**
 * _strchr - copies memory area
 * @s: a pointer to a string
 * @c: a character
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	unsigned int i, index, gotC = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			gotC = 1;
			index = i;
			break;
		}
	}

	if (gotC == 0)
		return (NULL);
	s = &s[index];
	return (s);
}
