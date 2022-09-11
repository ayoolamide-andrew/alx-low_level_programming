#include <stdio.h>
/**
 * main - program that prints possible different combinations of three digits
 *
 * Description: To print all possible different combinations of three digits
 *
 * Return: Always 0 (sucess)
 *
 */
int main(void)
{
	int n, m, p;

	for (n = 48; n <= 58; n++)
	{
		for (m = 49; m <= 58; m++)
		{
			for (p = 50; p <= 58; p++)
			{
				if (p > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(p);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
