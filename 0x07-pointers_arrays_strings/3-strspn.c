#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: (x).
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y, z;

	for (x = 0; *(s + x) != '\0'; x++)
	{
		z = 1;
		for (y = 0; *(accept + y) != '\0'; y++)
		{
			if (*(s + x) == *(accept + y))
			{
				z = 0;
				break;
			}
		}
		if (z == 1)
			break;
	}
	return (x);
}
