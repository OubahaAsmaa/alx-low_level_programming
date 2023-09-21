#include "main.h"
#include <string.h>

/**
 * cap_string - Capitalizes all words of a string
 * @s: The input string
 *
 * Return: Pointer to the resulting string
 */
char *cap_string(char *s)
{
	int i;
	char *separators = " \t\n,;.!?\"(){}";

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0 || strchr(separators, s[i - 1]))
			{
				s[i] -= 32; /* Convert lowercase to uppercase */
			}
		}
	}
	return (s);
}
