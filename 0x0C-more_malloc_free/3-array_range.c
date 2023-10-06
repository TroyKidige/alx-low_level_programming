#include "main.h"
#include <stdlib.h>
/**
 * *array_range -  a function that creates an array of integers.
 * @min: parameter for the smallest values
 * @max: parameter for the biggest values
 * Return: 0 (success)
 */

int *array_range(int min, int max)
{
	int *a;

	int m;

	int size;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	a = malloc(sizeof(int) * size);
	if (a == NULL)
	return (NULL);
	for (m = 0; min <= max; m++)
		a[m] = min++;
	return (a);
}
