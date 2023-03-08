#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: takes in an integer number
 * Return: returns the factorial of n, if n < 0 it returns -1
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
