#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * @void: void
 * Return: Always 0 (Success)
 */
int main(void)
{
long a[50];
int i;
a[0] = 1;
a[1] = 2;
for (i = 2; i < 50; i++)
{
a[i] = a[i - 2] + a[i - 1];
}
for (i = 0; i < 50; i++)
{
printf("%lu", a[i]);
if (i != 49)
printf(", ");
}
printf("\n");
return (0);
}
