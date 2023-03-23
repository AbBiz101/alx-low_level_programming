#include <stdarg.h>

/**
 * sum_them_all - sums all of its parameters
 * @n: takes in the number of arguments
 * Return: returns the sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
