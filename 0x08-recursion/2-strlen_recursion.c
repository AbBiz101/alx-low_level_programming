#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: a pointer to a string
 * Return: returns the length of the string s
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length += _strlen_recursion(s + 1) + 1;
	}
	return (length);
}
