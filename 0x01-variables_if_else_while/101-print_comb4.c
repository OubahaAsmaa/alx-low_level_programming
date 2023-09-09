#include<stdio.h>
/**
 * main - Entry point
 * print tree digits
 * Return: always 0 (success)
 */
int main(void)
{
	int n;
	int m;
	int x;

	for (n = 48; n <= 55; n++)
	{
		for (m = n + 1; m <= 56; m++)
		{
			for (x = m + 1; x <= 57; x++)
			{
				putchar(n);
				putchar(m);
				putchar(x);

				if (n != 55 || m != 56 || x != 57)
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
