#include <stdio.h>
/**
 * main - A program that prints the lowercase alphabet in reverse
 *
 * Description: To print lowercase alphabets in reverse
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		{
			putchar(ch);
		}
	putchar("\n");

	return (0);
}
