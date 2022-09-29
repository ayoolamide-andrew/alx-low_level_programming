#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: String to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	_putchar(*s);
	_putS_recursion(s + 1);
}
