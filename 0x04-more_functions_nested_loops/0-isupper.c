#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: takes in a number
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
int k = (c > 64 && c < 91) ? 1 : 0;
return (k);
}
