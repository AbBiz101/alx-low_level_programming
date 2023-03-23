#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: is the string to be printed between numbers
 * @n: takes in the number of arguments
 * Return: returns nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
