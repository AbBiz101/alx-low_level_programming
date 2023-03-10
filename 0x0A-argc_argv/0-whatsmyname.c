#include <stdio.h>

/**
 * main - prints the name of the program, followed by a new line
 * @argc: takes in an integer
 * @argv: takes in a string
 * Return: Always 0.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
