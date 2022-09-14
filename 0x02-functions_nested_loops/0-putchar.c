#include "main.h"

/**
 * main - A program that prints _putchar
 *
 * Description: To print _putchar
 *
 * Return: Always 0 (sucess)
 */

int main(void)
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
