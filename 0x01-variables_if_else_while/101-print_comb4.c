#include <stdio.h>
/**
* main - entry point
* Return: 0 after printing the function
*/
int main(void)
{
int n1;
int n2;
int n3;
for (n1 = 0; n1 <= 9; n1++)
{
for (n2 = 1; n2 <= 9; n2++)
{
for (n3 = 2; n3 <= 9; n3++)
if (n1 < n2  &&  n2 < n3 && n1 != n2 && n1 != n3 && n2 != n3)
{
putchar(n1 + 48);
putchar(n2 + 48);
putchar(n3 + 48);
if (n1 != 7 || n2 != 8 || n3 != 9)
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
