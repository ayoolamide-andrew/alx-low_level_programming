#include <stdio.h>
/**
 * main - A program that prints all the numbers of base 16 in lowercase
 *
 * Description: To print all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int n;
	char ch;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}

	for (ch = 'a'; n <= 'f'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
