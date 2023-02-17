#include <stdio.h>
/**
* main - entry point
* Return: 0 after printing the function
*/
int main(void)
{
char c;
for (c = '0'; c <= '8'; c++)
{
putchar(c);
putchar(',');
putchar(' ');
}
putchar('9');
return (0);
}
