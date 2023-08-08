#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str:input value
 * Return: 0
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int r, i;

	if (str == NULL)
	return (NULL);

	i = 0;
	while (str[i] != '\0')

	p = malloc(sizeof(char) * (i + 1));
		if (p == NULL)
		return (NULL);
	for (r = 0; r < i; r++)
	p[r] = str[r];
	p[r] = '\0';
	return (p);
}

