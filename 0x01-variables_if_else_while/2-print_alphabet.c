#include<stdio.h>
/**
 * main - Entry point
 * using putchar to output alphabet using ascii table
 * Return: always 0 (success)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
		putchar('\n');
		return (0);
}
