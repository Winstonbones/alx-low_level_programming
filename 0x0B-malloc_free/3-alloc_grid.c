#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of array
 * @height: height of array
 *
 * Return: a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **alloc;
	int i, y;
	if (width <= 0 || height <= 0)
	return (NULL);
	alloc = malloc(sizeof(int *) * height);
	if (alloc == NULL)
	return (NULL);
	for (i = 0; i < height; i++)
	{
	alloc[i] = malloc(sizeof(int) * width);
	if (alloc[i] == NULL)
	{
		for (; i >= 0; i--)
	free(alloc[i]);
		free(alloc);
	return (NULL);
	}
	}
		for (i = 0; i < height; i++)
	{
		for (y = 0; y < width; y++)
		alloc[i][y] = 0;
	}
	return (alloc);
}

