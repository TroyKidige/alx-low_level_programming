#include "lists.h"
/**
 * add_node_end - a function that adds a new node at the end of a list_t list.
 * @head: parameter for the head of the node
 * @str: parameter for the string
 * Return: 0 (success)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *manu, *tmp;
	unsigned int k, man = 0;

	manu = malloc(sizeof(list_t));
	if (manu == NULL)
		return (NULL);
	manu->str = strdup(str);
	for (k = 0; str[k] != '\0'; k++)
		man++;
	manu->len = man;
	manu->next = NULL;
	tmp = *head;

	if (tmp == NULL)
		*head = manu;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
	tmp->next  = manu;
	}
	return (*head);
}
