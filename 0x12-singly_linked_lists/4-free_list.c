#include <stdlib.h>
#include "lists.h"
/**
 * free_list - a function that frees a list_t list.
 * @head: parameter for output
 * Return: 0 (success)
 */
void free_lisst(list_t *head)
{
	list_t *footer;
	while (head)
	{
		footer = head->next;
		free(head->str);
		free(head);
		head = footer;
	}
}
