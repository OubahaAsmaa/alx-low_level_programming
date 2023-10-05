#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Concatenates all the arguments into a single string.
 * @ac: The number of arguments.
 * @av: An array of pointers to strings.
 * Return: A pointer to the concatenated string.
 */
char *argstostr(int ac, char **av)
{
	 int total_length = 0;
	 int i, j, k = 0;
	 char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
		{
			total_length++;
		}

	str = malloc(sizeof(char) * (total_length + ac + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[k++] = av[i][j];
		str[k++] = '\n';
	}
	str[k] = '\0';
	return (str);
}
