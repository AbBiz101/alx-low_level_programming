#include <stdio.h>
/**
 * main - prints the sum of the even-valued terms of a Fibonacci sequence under
 * @void: void
 * Return: Always 0 (Success)
 */
int main(void)
{
long a[35];
int i;
long sum = 0;
a[0] = 1;
a[1] = 2;
for (i = 2; i < 35; i++)
{
a[i] = a[i - 2] + a[i - 1];
}
for (i = 0; i < 35; i++)
{
if (a[i] < 4000000 && a[i] % 2 == 0)
{
sum += a[i];
}
}
printf("%lu", sum);
printf("\n");
return (0);
}
