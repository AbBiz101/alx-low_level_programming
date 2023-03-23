#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints numbers, followed by a new line
 * @separator: is the string to be printed between strings
 * @n: takes in the number of arguments of string passed
 * Return: returns nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
