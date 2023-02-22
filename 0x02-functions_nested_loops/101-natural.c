#include <stdio.h>
/**
 * main - prints the sum of the multiples of 3 and 5
 * @void: void
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = 1024;
int sum = 0;
int i;
for (i = 3; i < n; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}
printf("%d\n", sum);
return (0);
}
