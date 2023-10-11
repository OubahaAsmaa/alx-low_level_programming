#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name ptr to function
 * @name: ptr to string
 * @f: pointer to function
 * Return: void -nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
