#include "main.h"


int _sqrt(int n, int i);
/**
 * _sqrt_recursion - a function that returns
 * @n: parameter for number
 * Return: 0 (success)
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - calculates natural numbers
 * @n: paramter for number
 * @i: parametr for interate
 * Return: number
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}

