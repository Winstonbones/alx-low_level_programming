#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a function given as a parameter 
 * @array: array
 * @size: input value
 * @action: pointer to print
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

