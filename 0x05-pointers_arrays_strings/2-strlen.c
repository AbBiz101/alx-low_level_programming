#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: a pointer to a character
 *
 * Return: returns an integer
 */

int _strlen(char *s)
{
int i = 0;

while (s[i] != '\0')
{
i++;
}
return (i);
}

