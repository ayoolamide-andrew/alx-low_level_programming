#include <stdio.h>

/**
 * main - A program that prints all single digit numbers of base 10.
 *
 * Description: "To print all single digits of base 10 using putchar"
 *
 * Return: Always 0 (sucess)
 *
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{

		putchar(n);

	}

	putchar('\n');

	return (0);
}
