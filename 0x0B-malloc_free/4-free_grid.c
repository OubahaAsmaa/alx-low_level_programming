#include <stdlib.h>
#include <string.h>

/**
 * free_grid - function that prints a string, followed by a new line
 * @grid: The string to print
 * @height: The string to print
 *
 * Return: nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
