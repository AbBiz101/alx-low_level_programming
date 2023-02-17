#include <stdio.h>
/**
* main - entry point
* Return: 0 after printing the function
*/
int main(void)
{
int num;
for (num = 0; num <= 8; num++)
{
putchar(num + 48);
if (num != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
