#include "main.h"

/**
 * print_line - Display a dash line using  _.
 *
 * @n: The number of _ characters to be printed.
 * Example :
 *
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{

	int c;
		for (c = 0; c < n; c++)
		{
			_putchar('_');
		}
	_putchar('\n');
}
}
