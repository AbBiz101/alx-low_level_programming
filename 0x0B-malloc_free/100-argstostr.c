#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: takes in an integer
 * @av: a pointer to a pointer
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int length = ac, index = 0, i, j;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j]; j++)
				length++;
		}
		str = (char *)malloc((length * sizeof(char)) + 1);
		if (str == NULL)
			return (NULL);
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j]; j++)
			{
				str[index++] = av[i][j];
			}
			str[index++] = '\n';
		}

		str[length] = '\0';
	}
	return (str);
}
