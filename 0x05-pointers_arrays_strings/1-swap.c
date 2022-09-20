#include "main.h"

/*
 * swap_int - swaps the values of two integers
 * @a: pointer to the first value
 * @b: pointer to the second value
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
