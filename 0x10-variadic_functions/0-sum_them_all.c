#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - a sum that returns all of its parameters
 *@n: parameter for the number
 *@... - parameter for 
 *Return: 0 (success)
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
