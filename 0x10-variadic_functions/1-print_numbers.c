#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers
 * @separator: pointer to string.
 * @n: count of arg in fonction.
 * @...: A variable numbers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	va_list args;
	unsigned int index = 0;

	va_start(args, n);

	while (index < n)
	{
		printf("%d", va_arg(args, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
		index++;
	}

	printf("\n");

	va_end(args);
}
