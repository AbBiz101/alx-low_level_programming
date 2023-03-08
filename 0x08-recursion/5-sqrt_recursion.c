#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * squareRoot - returns back the natural square root of a number
 * to _sqrt_recursion
 * @n: takes in an integer number
 * @square: takes in an integer number
 * Return: returns the natural square root of a number,
 * if n does not have a square root it should return -1
 */

int squareRoot(int n, int square);

int _sqrt_recursion(int n)
{
	return (squareRoot(n, 1));
}

/**
 * squareRoot - returns the natural square root of a number
 * @n: takes in an integer number
 * @square: takes in an integer number
 * Return: returns the natural square root of a number,
 * if n does not have a square root it should return -1
 */

int squareRoot(int n, int square)
{
	if ((square * square) == n)
	{
		return (square);
	}
	else if ((square * square) < n)
	{
		return (squareRoot(n, square + 1));
	}
	else
	{
		return (-1);
	}
}
