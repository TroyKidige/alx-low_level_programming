#include "main.h"
/**
 * *_strstr - a function that locates a substring.
 * @haystack: parametr for input
 * @needle: parameter for input
 * Return: 0 (success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *m = haystack;

		char *s = needle;

		while (*m == *s && *s != '\0')
		{
			m++;
			s++;
		}
		if (*s == '\0')
			return (haystack);
	}
	return (0);
}
