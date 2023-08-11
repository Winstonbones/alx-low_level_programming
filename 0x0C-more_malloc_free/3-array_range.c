#include "main.h"
#include <stdlib.h>

/**
 * *array_range - a function that creates an array of integers
 * @min:range of values stored
 * @max: input value
 *Return: void
 */
int *array_range(int min, int max)
{
	int *p;
	int x;

	if (min > max)
		return (NULL);
	p = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (p == NULL)
		return (NULL);

	while (min <= max)
	{
		p[x] = min;
		x++;
		min++;
	}
	return (p);
}
