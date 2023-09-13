#include "main.h"
/**
* print_alphabet_x10 - print alphabet teen times
*
* Return: alwyas void
*/
void print_alphabet_x10(void)
{
	char ch;
	int a;

	for (a = 0; a < 10; a++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
		_putchar(ch);
		}
		_putchar('\n');
	}
}
