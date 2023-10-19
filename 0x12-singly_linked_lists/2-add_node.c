#include "lists.h"
/**
 * add_node - a function that adds a new node at the beginning
 * @head: parameter for the head node
 * @str: parameter for the string
 * Return: 0 (success)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *united;
	unsigned int y, awesome = 0;

	united = malloc(sizeof(list_t));
	if (united == NULL)
		return (NULL);
	united->str = strdup(str);
	for (y = 0; str[y] != '\0'; y++)
		awesome++;
	united->len = awesome;
	united->next = *head;
	*head = united;
	return (*head);
}
