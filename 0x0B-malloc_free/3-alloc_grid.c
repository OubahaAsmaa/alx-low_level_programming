#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - function that prints a string, followed by a new line
 * @width: The string to print
 * @height: The string to print
 * Return: nothing.
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;

	if (height <= 0 || width <= 0)
	return (NULL);
	a = malloc(sizeof(int *) * height);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);

		if (a[i] == NULL)
		{
			for (; i >= 0; i--)
				free(a[i]);

			free(a);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width ; j++)
		{
			a[i][j] = 0;
		}
	}
		return (a);
}	
