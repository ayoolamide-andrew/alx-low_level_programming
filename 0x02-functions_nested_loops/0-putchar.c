#include "main.h"

/**
 * _putchar - A program that prints _putchar, followed by a new line
 *
 * Description: The character to print
 * Return: Always 0 (sucess)
 */

int _putchar(char c)

{

	char text[10] = "_putchar";

	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
