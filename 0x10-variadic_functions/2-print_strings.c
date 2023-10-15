#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: parameter for string
 * @...: parameter for variable
 * @n: parameter for number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list alxstrings;
	char *str;
	unsigned int alxstrings1;

	va_start(alxstrings, n);

	for (alxstrings1 = 0; alxstrings1 < n; alxstrings1++)
	{
		str = va_arg(alxstrings, char *);

		if (str == NULL)
			printf("\n");
		else
			printf("%s", str);

		if (alxstrings1 != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(alxstrings);
}
