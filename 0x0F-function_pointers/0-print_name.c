#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: Name to print
 * @f: Function to print with
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
