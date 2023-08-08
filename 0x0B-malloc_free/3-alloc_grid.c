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
	int p;
	int e;
	int **alloc;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	alloc = (int **)malloc(sizeof(int *) * height);
	if (alloc == NULL)
	{
		return (NULL);
	}
	for (int p = 0; p < height; p++)
	{
		alloc[p] = (int *)calloc(width, sizeof(int));

	if (alloc[p] == NULL)
	{
	for (int e = 0; e < p; e++)
	{
		free(alloc[e]);
	}
		free(alloc);
		return (NULL);
	}

	}
	return (alloc);
}

