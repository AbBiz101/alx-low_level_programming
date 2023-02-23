#include <stdio.h>

/**
 * main - Fizz-Buzz test
 * Return: 0
 */
int main(void)
{
int j;
for (j = 1; j <= 100; j++)
{
if (j % 3 == 0 && j % 5 == 0)
{
printf("FizzBuzz\n");
}
else if (j % 3 == 0)
{
printf("Fizz\n");
}
else if (j % 5 == 0)
{
printf("Buzz\n");
}
else
{
printf("%d\n", j);
}
}
pintf("\n");
return (0);
}
