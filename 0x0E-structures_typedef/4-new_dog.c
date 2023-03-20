#include <stdlib.h>
#include "dog.h"

int stringLength(char *str);
char *stringCopy(char *dest, char *src);

/**
 * stringLength - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */

int stringLength(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * stringCopy - Copies a string pointed to by src, including the
 *              terminating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 *
 * Return: The pointer to dest.
 */

char *stringCopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];
	dest[index] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the owner of the dog
 * Return: returns the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pDog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	pDog = malloc(sizeof(dog_t));

	if (pDog == NULL)
		return (NULL);
	pDog->name = malloc(sizeof(char) * (stringLength(name) + 1));
	if (pDog->name == NULL)
	{
		free(pDog);
		return (NULL);
	}
	pDog->owner = malloc(sizeof(char) * (stringLength(owner) + 1));
	if (pDog->owner == NULL)
	{
		free(pDog->name);
		free(pDog);
		return (NULL);
	}
	pDog->name = stringCopy(pDog->name, name);
	pDog->age = age;
	pDog->owner = stringCopy(pDog->owner, owner);
	return (pDog);
}
