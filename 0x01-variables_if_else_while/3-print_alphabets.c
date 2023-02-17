#include <stdio.h>
/**
 * main - entry point
 * Return: 0 after printing the function
 */
int main(void)
{
char letters;
for (letters = 'a'; letters <= 'Z'; letters++)
{
putchar(letters);
}
putchar('\n');
return (0);
}
