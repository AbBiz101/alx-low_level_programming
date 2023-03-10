#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints result of the multiplication, followed by a new line
 * @argc: takes in an integer
 * @argv: takes in a string
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc < 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
