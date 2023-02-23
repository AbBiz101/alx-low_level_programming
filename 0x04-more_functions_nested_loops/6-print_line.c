#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: the number of times the character _ should be printed
 * Return: a line
 */

void print_line(int n)
{
while (n > 0)
{
_putchar('_');
n--;
};
_putchar('\n');
}
