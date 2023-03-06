#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: a pointer to a string
 * @b: a pointer to a chachter
 * @n: takes in an integer for the utmost byte to be filled up with
 * Return: returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
