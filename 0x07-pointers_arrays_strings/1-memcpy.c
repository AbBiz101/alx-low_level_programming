#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: a pointer to a string
 * @src: a pointer to a string
 * @n: takes in an integer for the utmost byte to be copied to
 * Return: returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[j++];
	}
	return (dest);
}
