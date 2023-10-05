#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: first txt
 * @s2: second txt
 * Return: concat
 */
char *str_concat(char *s1, char *s2)
{
	char *txt;
	int i, ii;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ii = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ii] != '\0')
		ii++;
	txt = malloc(sizeof(char) * (i + ii + 1));

	if (txt == NULL)
		return (NULL);
	i = ii = 0;
	while (s1[i] != '\0')
	{
		txt[i] = s1[i];
		i++;
	}

	while (s2[ii] != '\0')
	{
		txt[i] = s2[ii];
		i++, ii++;
	}
	txt[i] = '\0';
	return (txt);
}
