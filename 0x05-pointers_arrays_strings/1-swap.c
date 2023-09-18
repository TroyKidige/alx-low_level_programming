#include "main.h"
/**
 * void swap_int - a program that swaps the values of two integers
 * @n: a parameter that checks values
 * Return: 0 (success)
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;

	*a = *b;

	*b = c;
}
