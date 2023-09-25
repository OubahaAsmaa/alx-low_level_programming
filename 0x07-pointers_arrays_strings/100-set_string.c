#include "main.h"
#include <stdio.h>

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to a pointer.
 * @to: Pointer to the string.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
