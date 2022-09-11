#include <stdio.h>
/**
 * main - program that prints all possible different combinations of two digits
 *
 * Description: To print all possible different combinations of two digits
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int n, m;

	for (n = 48; n <= 56; n++)
	{
		for (m = 47; m <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
