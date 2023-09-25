#include "main.h"
/**
 * _strstr - locates a substring.
 * @haystack: the string to check
 * @needle: substring to find
 *
 * Return: a pointer to the beginning of the locate substring.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *strsub = needle;
		char *a = haystack;

		while (*haystack != '\0' && *strsub != '\0' && *strsub == *haystack)
		{
			strsub++;
			haystack++;
		}
		if (*strsub == '\0')
			return (a);
		haystack = a + 1;
	}
	return (0);
}
