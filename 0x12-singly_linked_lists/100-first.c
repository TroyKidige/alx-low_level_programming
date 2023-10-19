#include "lists.h"
void first(void)__attribute__((constructor));
/**
 *first - a function that prints a sentence before the aim
 *Return: 0 (success)
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
