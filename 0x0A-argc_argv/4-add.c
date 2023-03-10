#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - prints sum of positive numbers, followed by a new line
 * @argc: takes in an integer
 * @argv: takes in a string
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, j, argLength, sum = 0;

	if (argc < 3)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			argLength = strlen(argv[i]);

			for (j = 0; j < argLength; j++)
			{
				if (isdigit(*(argv[i] + j)) == 0)
				{
					printf("%s\n", "Error");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
