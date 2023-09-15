#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14; 10 times.
 *
 * Return: void.
 */

void more_numbers(void)
{
	int c1, c2;

	for (c1 = 0; c1 <= 9; c1++)
	{
		for (c2 = 0; c2 <= 14; c2++)
		{
			if (c2 > 9)
				_putchar((c2 / 10) + '0');
			_putchar((c2 % 10) + '0');
		}
		_putchar('\n');
	}
}
