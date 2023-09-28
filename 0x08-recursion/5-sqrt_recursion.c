#include "main.h"

int ntr_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square of a number
 * @n: number to calculate the square
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (ntr_sqrt_recursion(n, 0));
}

/**
 * ntr_sqrt_recursion - recurses to find the natural sqrt
 * @n: number to calculate the sqaure
 * @i: iterator
 *
 * Return: the resulting square root
 */
int ntr_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (ntr_sqrt_recursion(n, i + 1));
}
