#include "main.h"

/**
 * lastIndex - returns the last index of a string including the null character
 * @s: pointer the string
 * Return: int
 */

int is_palindrome(char *s);

int checkPalindrom(char *s, int start, int end, int pair);

int lastIndex(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += lastIndex(s + 1) + 1;
	return (n);
}

/**
 * is_palindrome - checks if a string is a palindrome or not
 * @s: string to check
 * Return: returns 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int end = lastIndex(s);

	return (checkPalindrom(s, 0, end - 1, end % 2));
}

/**
 * checkPalindrom - checks if a string is a palindrome or not
 * @s: string
 * @start: int moves from right to left
 * @end: int moves from left to right
 * @pair: int
 * Return: returns 1 if a string is a palindrome and 0 if not
 */

int checkPalindrom(char *s, int start, int end, int pair)
{
	if ((start == end && pair != 0) || (start == end + 1 && pair == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (checkPalindrom(s, start + 1, end - 1, pair));
}
