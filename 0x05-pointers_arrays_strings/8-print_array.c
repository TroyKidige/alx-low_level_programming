#include "main.h"
/**
 * print_array -  a function that prints n elements
 * @a: parameter
 * @n: second
 * Return: 0 (success)
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
