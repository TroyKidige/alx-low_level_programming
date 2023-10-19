#include "lists.h"
/**
 * print_list - a function that prints all the elements
 * @h: parameter for the pointer
 * Return: 0 (success)
 */
size_t print_list(const list_t *h)
{

	size_t manchester;

	manchester = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		manchester++;
	}
	return (manchester);
}
