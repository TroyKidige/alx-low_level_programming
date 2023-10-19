#include "lists.h"
/**
 * free_list - a function that frees a list_t list.
 * @head: parameter for output
 * Return: 0 (success)
 */
void free_list(list_t *head)
{
	list_t *amg;

	while (head)
	{
		amg = head->next;
		free(head->str);
		free(head);
		head = amg;
	}
}
