#include <stdio.h>

/**
 * main - prints all arguments it receives an argument per line
 * @argc: takes in an integer
 * @argv: takes in a string
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
