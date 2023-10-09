#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - fonction to allocate Mermory
 * @b: int bytes allocate
 *
 * Return: dispaly adresse allocat
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
