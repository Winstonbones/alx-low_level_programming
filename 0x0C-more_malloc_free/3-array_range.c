#include "main.h"
#include <stdlib.h>

/**
 * *array_range - a function that creates an array of integers
 * @int min: input value
 *@int max: input value	
 *Return: void
 */
int *array_range(int min, int max
{
	int *p;
	int x;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * size);
	if (p == NULL)
	return (NULL);

	while (x = 0; min <= max; x++)
	{
		P[x] = min;
		min++;
	}

	return (p);
}
	

