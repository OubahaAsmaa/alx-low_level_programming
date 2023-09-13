#include "main.h"
/**
* print_alphabet -Print alphabet using _putchar.
*
* Return: always void
*/
void print_alphabet(void)
{
	char ch;

	for (ch = 97; ch <= 122; ch++)
		_putchar(ch);
	_putchar('\n');
}
