#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_them_all - Returns the sum of all paramters.
 * @n: count of paramters passed to the function.
 * @...: Args variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;

	unsigned int i = 0;
	unsigned int sum = 0;

	va_start(arg, n);

	while (i < n)
	{
		sum += va_arg(arg, int);
		i++;
	}

	va_end(arg);

	return (sum);
}
