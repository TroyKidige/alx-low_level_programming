#include "lists.h"
/**
 * print_list - a function that prints all the elements
 * @h: parameter for pointer
 * Return: 0 (success)
 */
size_t print_list(const list_t *h)
{
	size_t united;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		united++;
	}
	return (united);
}
