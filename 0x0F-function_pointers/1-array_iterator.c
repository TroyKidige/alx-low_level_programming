#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function
 * @array: parameter for array
 * @size: parameter for elements
 * @action: paramter for pointer
 * Return: 0 (success)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array == NULL || action == NULL)
		return;

	for (k = 0; k < size; k++)
	{
		action(array[k]);
	}
}
