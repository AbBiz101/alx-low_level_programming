#include "main.h"
#include <stdlib.h>

/**
 * wordCount - counts the number of words in a string
 * @s: a pointer to a string
 * Return: an integer (number of words)
 */

int wordCount(char *s)
{
	int i, numOfWords = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ' && (s[i + 1] == ' ' || s[i + 1] == '\0'))
		{
			numOfWords++;
		}
	}

	return (numOfWords);
}

/**
 * strtow - splits a string into words
 * @str: takes in a pointer to a string
 * Return: a pointer to an array of strings (words),
 *         returns NULL if str == NULL or str == ""
 */

char **strtow(char *str)
{
	char **retWord;
	int num, i, j, k, l, m = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	num = wordCount(str);
	if (num == 1)
		return (NULL);
	retWord = (char **)malloc(num * sizeof(char *));
	if (retWord == NULL)
		return (NULL);
	retWord[num - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			retWord[m] = (char *)malloc(j * sizeof(char));
			j--;
			if (retWord[m] == NULL)
			{
				for (k = 0; k < m; k++)
					free(retWord[k]);
				free(retWord[num - 1]);
				free(retWord);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				retWord[m][l] = str[i + l];
			retWord[m][l] = '\0';
			m++;
			i += j;
		}
		else
			i++;
	}
	return (retWord);
}
