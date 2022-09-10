#include <stdio.h>

/**
 * main - To write a program that prints alphabets in lowercase.
 *
 * Description: "Print alphabets in lowercase."
 *
 * Return: Always 0 (sucess)
 *
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		{
		putchar(ch);
		}

	putchar('\n');
	return (0);

}
