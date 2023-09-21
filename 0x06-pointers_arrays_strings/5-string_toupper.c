#include "main.h"
/**
 * *string_toupper -  function that changes all lowercase
 * @str: checks what must be changed
 * Return: 0 (success)
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}
