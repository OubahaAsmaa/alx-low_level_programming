#include<stdio.h>
/**
 *main - Entry point
 *Print all the letters except q and e
 *Return: always 0 (success)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n != 101 && n != 113)
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
