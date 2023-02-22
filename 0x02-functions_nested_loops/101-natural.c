#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int sum;
for (int i = 0; i < 1024; i++)
{
if (i % 5 == 0 || i % 3 == 0)
	sum += i;
}
printf("%d\n", sum);
return (0);
}

