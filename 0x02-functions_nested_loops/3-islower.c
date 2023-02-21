#include "main.h"
/**
 * _islower - checks for lower case letters
 * @c: takes in a character
 * Return: 1 for lower case and 0 for other wise
 */
int _islower(int c)
{
int flag = 0;
int i;
for (i = 'a'; i <= 'z'; i++)
{
if (c == i)
{
flag = 1;
break;
}
}
if (flag == 0)
{
return (0);
}
else
{
return (1);
}
}
