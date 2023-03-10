#include <stdio.h>

/**
 * main - prints the number of arguments passed into it, followed by a new line
 * @argc: takes in an integer
 * @argv: takes in a string
 * Return: Always 0.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", (argc - 1));
	return (0);
}
