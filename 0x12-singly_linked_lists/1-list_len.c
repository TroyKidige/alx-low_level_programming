#include "lists.h"
/**
 * list_len - a function that prints the length of a list
 * @h: parameter for the head
 *Return: 0 (success)
 */
size_t list_len(const list_t *h)
{
	size_t united = 0;

	while (h != NULL)
	{
		h = h->next;
		united++;
	}
	return (united);
}
