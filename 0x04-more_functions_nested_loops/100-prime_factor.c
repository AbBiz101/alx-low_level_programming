#include <stdio.h>
/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
long long n = 612852475143;
long long i, largest = 0;
for (i = 2; i <= n; i++)
{
while (n % i == 0)
{
if (i > largest)
{
largest = i;
}
n /= i;
}
}
printf("%lld\n", largest);
return (0);
}
