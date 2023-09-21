#include "main.h"
/**
 * reverse_array -  a function that reverses
 * @a: checks number
 * @n: elements in the whole array
 * Return: 0 (success)
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
