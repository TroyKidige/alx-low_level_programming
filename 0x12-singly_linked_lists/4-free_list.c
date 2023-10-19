#include "lists.h"
/**
 * free_list - a function that frees a list_t list.
 * @head: parameter for output
 * Return: 0 (success)
 */
void free_list(list_t *head)
{
	list_t *united;
	while ((united = head) != NULL)
	{
		head = head->next;
		free(united->str);
		free(united);
	}
}
