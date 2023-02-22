#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: takes in a character
 * Return: 1 for a letter and 0 for other wise
 */
int _isalpha(int c)
{
int lowerCaseFlag = 0;
int upperCaseFlag = 0;
int i;
for (i = 'a'; i <= 'z'; i++)
{
if (c == i)
{
lowerCaseFlag = 1;
break;
}
}
for (i = 'A'; i <= 'Z'; i++)
{
if (c == i)
{
upperCaseFlag = 1;
break;
}
}
if (lowerCaseFlag == 0 && upperCaseFlag == 0)
{
return (0);
}
else
{
return (1);
}
}
