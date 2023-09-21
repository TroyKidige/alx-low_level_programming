#include "main.h"
/**
 * *_strncpy - a function that copies a string.
 * @dest: holds the string
 * @src: your source
 * @n: allowed bytes
 * Return: 0 (success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = src_len; index < n; index++)
		dest[index] = '\n';
	return (dest);
}
