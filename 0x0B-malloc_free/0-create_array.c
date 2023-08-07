#include "main.h"
#include <stdlib.h>

/**
 *  *create_array - an array of chars, and initializes it with a specific char.
 *@c:input value
 *@size: input value
 *Return: null if size is equal to 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
	return (NULL);

	s = malloc(size * sizeof(char));
	if (size == 0)
	return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}


