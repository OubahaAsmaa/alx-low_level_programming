#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Print diagonal sum.
 * @a: array int
 * @size: array size
 */
void print_diagsums(int *a, int size)
{
	int i, diag1 = 0, diag2 = 0;

	for (i = 0; i < size; i++)
	{
		diag1 += a[i * size + i];
		diag2 += a[i * size + (size - 1 - i)];
	}
	printf("%i, %i\n", diag1, diag2);
}
