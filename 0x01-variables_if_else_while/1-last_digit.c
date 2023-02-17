#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Return: 0 after printing the function
 */
/* Task zero */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
{
printf("%d is and is less than 6 and not 0\n", n);
}
else if (n == 0)
{
printf("%d is and is 0\n", n);
}
else if (n < 6)
{
printf("%d is and is less than 6 and not 0\n", n);
}
return (0);
}
