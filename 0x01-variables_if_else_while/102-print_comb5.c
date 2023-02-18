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
int n4;
int n5;
int n6;
for (n1 = 0; n1 <= 9; n1++)
{
for (n2 = 0; n2 <= 9; n2++)
{
for (n3 = 0; n3 <= 9; n3++)
{
for (n4 = 0; n4 <= 9; n4++)
{
n5 = (n1 * 10) + n2;
n6 = (n3 * 10) + n4;
if (n5 >= n6)
{
continue;
}
putchar(n1 + 48);
putchar(n2 + 48);
putchar(' ');
putchar(n3 + 48);
putchar(n4 + 48);
if (n1 == 9 && n2 == 8 && n3 == 9 && n4 == 9)
{
break;
}
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
