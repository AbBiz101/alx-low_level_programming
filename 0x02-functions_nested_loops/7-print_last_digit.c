#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: takes in a number
 * Return: returns the last digit
 */
int print_last_digit(int n)
{
int rem = n % 10;
if (rem < 0)
rem = -1 * rem;
_putchar(rem + '0');
return (rem);
}
