#include "main.h"

/**
 * _isdigit - a program that checks your numbers
 * @c: a parameter that checks
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
