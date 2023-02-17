#include <stdio.h>
/**
* main - entry point
* Return: 0 after printing the function
*/
int main(void)
{
int c;
for (c = 0; c <= 8; c++)
{
putchar(c + 48);
putchar(',');
putchar(' ');
}
putchar('9');
putchar('\n');
return (0);
}
