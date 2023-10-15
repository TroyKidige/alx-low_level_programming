#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - a function that return the sum of its parameters
 * @...: paramter to be checked
 * @n: parameter for numbers passed to the function
 * Return: if n == 0 (0 = success)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
