#include <stdio.h>
/**
* main - entry point
* Return: 0 after printing the function
*/
int main(void)
{
int num1;
int num2;
for (num1 = 0; num1 <= 9; num1++)
{
for (num2 = 1; num2 <= 9; num2++)
{
if (num1 < num2 && num1 != num2)
{
putchar(num1 + 48);
putchar(num2 + 48);
if (num1 != 8 || num2 != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
