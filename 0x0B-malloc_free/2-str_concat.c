#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 */
char *str_concat(char *s1, char *s2)
{
	int i, p, conc1, conc2, con;
	char *tr;

	conc1 = conc2 = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			conc1++;
	}

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			conc2++;
	}

	con = conc1 + conc2;
	tr = (char *)malloc(sizeof(char) * (con + 1));
	if (tr == NULL)
		return (NULL);

	for (i = 0; i < conc1; i++)
		tr[i] = s1[i];
	for (p = 0; p < conc2; p++, i++)
		tr[i] = s2[p];
	tr[con] = '\0';

	return (tr);
}

