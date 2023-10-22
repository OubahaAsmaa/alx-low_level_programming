#include <stdio.h>

/**
 * print_first - function executed before main
 * Description : using __attribute__((constructor)) for processing
 * to excute function first.
 * Return: no return.
 */

void __attribute__ ((constructor))  print_first(void)
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
