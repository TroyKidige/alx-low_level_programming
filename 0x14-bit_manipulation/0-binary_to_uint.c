#include "main.h"
/**
 *binary_to_uint -a function that converts a binary number to an unsigned int
 *@b: the parameter for binary
 *Return: 0 (success)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int united;
	int man;

	united = 0;
	if (!b)
		return (0);
	for (man = 0; b[man] != '\0'; man++)
	{
		if (b[man] != '0' && b[man] != '1')
			return (0);
	}
	for (man = 0; b[man] != '\0'; man++)
	{
		united <<= 1;
		if (b[man] == '1')
			united += 1;
	}
	return (united);
}
