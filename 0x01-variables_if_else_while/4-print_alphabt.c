#include <stdio.h>
/**
 * main - entry point
 * Return: 0 after printing the function
 */
/* Task 02 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
while (ch != 'e' && ch != 'q')
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
