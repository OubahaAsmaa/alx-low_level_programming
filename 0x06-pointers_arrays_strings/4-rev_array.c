#include "main.h"

/**
*reverse_array -  function that reverse
*@a: pointer array.
*@n: number of array.
*/

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		int y = a[i];

		a[i] = a[j];
		a[j] = y;
	}
}
