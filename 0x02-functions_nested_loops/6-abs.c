#include "main.h"
/**
 *_abs - a program that prints integers
 *@c: a function parameter that prints
 *Return: 0 (success)
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}

	return (c);

}
