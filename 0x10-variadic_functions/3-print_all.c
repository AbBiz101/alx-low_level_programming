#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: is a list of types of arguments passed to the function
 * Return: returns nothing
 */

void print_all(const char * const format, ...)
{
	unsigned int i;
	char *str, *separator;
	va_list args;

	va_start(args, format);


	separator = "";

	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", separator,  va_arg(args, int));
			break;
		case 'i':
			printf("%s%d", separator, va_arg(args, int));
			break;
		case 'f':
			printf("%s%f", separator, va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", separator, str);
			break;
		default:
			i++;
			continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
}
