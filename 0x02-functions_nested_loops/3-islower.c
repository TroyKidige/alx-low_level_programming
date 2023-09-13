#include "main.h"
/**
 *_islower - a program that checks for lower case
 * @c: The parameter to be checked
 * Return: 1 (success)
 */
int _islower(int c);

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
