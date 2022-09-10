#include <stdio.h>

/**
 * main - Program that prints the alphabet in lowercase and then in uppercase.
 *
 * Description: To print alphabets in lowercase and then uppercase.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
