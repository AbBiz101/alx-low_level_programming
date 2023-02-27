#include "main.h"

/**
 * rev_string - prints a string, in reverse
 * @s: a pointer to a character
 *
 * Return: returns nothing
 */
void rev_string(char *s)
{
int left = 0;
int right = 0;
char temp;
while (s[left] != '\0')
{
left++;
}
left--;
while (left > right)
{
temp = s[right];
s[right] = s[left];
s[left] = temp;
left--;
right++;
}
}
