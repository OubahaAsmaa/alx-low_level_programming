#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - prototype main
 * @width: width
 * @height: height
 * Return: as
 */
int **alloc_grid(int width, int height)
{
	int **as;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	as = malloc(sizeof(int *) * height);

	if (as == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		as[x] = malloc(sizeof(int) * width);

		if (as[x] == NULL)
		{
			for (; x >= 0; x--)
				free(as[x]);

			free(as);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			as[x][y] = 0;
	}

	return (as);
}
