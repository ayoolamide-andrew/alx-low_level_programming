#include <stdio.h>
/**
 * main - program that prints all possible combinations of single-digit numbers
 *
 * Description: To print all possible combinations of single-digit numbers
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
       int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
