#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - prints 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid.
 * Return: return a pointer or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **z;

	if (width <= 0 || height <= 0)
	return (NULL);
	z = malloc(sizeof(int *) * height);
	if (z == NULL)
	{
	free(z);
	return (NULL);
	}
	for (i = 0; i < height; i++)
	{
	z[i] = malloc(sizeof(int) * width);
	if (z[i] == NULL)
	{
	for (j = i; j >= 0; j--)
	{
	free(z[j]);
	}
	free(z);
	return (NULL);
	}
	}
	for (k = 0; k < height; k++)
	{
	for (l = 0; l < width; l++)
	{
	z[k][l] = 0;
	}
	}
	return (z);
}
