#include<stdio.h>
/**
 * main - Entry point
 * program prints digits
 * the (!) prevents printing the comma and space
 * Return: always 0 (success)
 */
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 56; n++)
	{
		for (m = n + 1; m <= 57; m++)
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
	putchar('\n');
	return (0);
}
