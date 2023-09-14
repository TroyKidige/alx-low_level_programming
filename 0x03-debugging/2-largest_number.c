#include "main.h"
/**
 * largest_number - returns the largest number
 * @n: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
	int larget;
	if (a > b && a > c)
{
	largest = a;
}
	if (a > b && c > a)
{
	largest = c;
}
	if (b > c)
{
	largest = b;
}
	else 
{
	largest = c;
}
return (largest);
