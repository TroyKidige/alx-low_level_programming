#include "main.h"
/**
 * swap_int - a program that swaps the values of two integer
 * @a: second
 * @b: third
 * Return: 0 (success)
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;

	*a = *b;

	*b = c;
}
