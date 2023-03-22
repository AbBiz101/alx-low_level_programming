#include "3-calc.h"

/**
 * op_add - adds the two integers
 * @a: takes in an integer number 1
 * @b: takes in an integer number 2
 * Return: returns the sum of the two numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts the two integers
 * @a: takes in an integer number 1
 * @b: takes in an integer number 2
 * Return: returns the difference of the two numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies the two integers
 * @a: takes in an integer number 1
 * @b: takes in an integer number 2
 * Return: returns the product of the two numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - devides the two integers
 * @a: takes in an integer number 1
 * @b: takes in an integer number 2
 * Return: returns the quotient of the two numbers
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - finds the remainder of the division of the two integers
 * @a: takes in an integer number 1
 * @b: takes in an integer number 2
 * Return: returns the remainder of the divisionof the two numbers
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
