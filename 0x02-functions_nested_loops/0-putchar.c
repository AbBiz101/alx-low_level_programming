#include "main.h"
/**
* main - entry point
* Return: 0 after printing the function
*/
int main(void)
{
char str[] = "_putchar";
int len = strlen(str);
int i;
for (i = 0; i < len; i++)
{
putchar(str[i]);
}
putchar('\n');
return (0);
}
