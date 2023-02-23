#include "main.h"
/**
 * _isdigit - checks if a number is digit or not
 * @c: takes in a number
 * Return: 1 if c is a digit or 0 if otherwise
 */

int _isdigit(int c)
{
char i;
for (i = '0'; i <= '9'; i++)
{
if (c == i)
return (1);
}
return (0);
}
