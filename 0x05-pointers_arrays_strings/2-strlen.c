#include "main.h"
/**
 *_strlen - a function that returns the length of a string
 * @s: string parameter
 * Return: 0 (success)
 */
int _strlen(char *s)
{
	int troy = 0;

	while (*s != '\0')
	{
		troy++;
		s++;
	}
	return (troy);
}
