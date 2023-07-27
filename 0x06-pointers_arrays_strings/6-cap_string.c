#include "main.h"
#include <stdio.h>
/**
*cap_string - a function that capitalizes all words of a string
*@p: input string to be capitalized
*
*Return: pointer to the switched string
*/
char *cap_string(char *p)
{
	int idx = 0;

	while (p[idx])
	{
		while (p[idx] != '\0')
			idx++;

		if (p[idx - 1] == ' ' ||
		    p[idx - 1] == '\t' ||
		    p[idx - 1] == '\n' ||
		    p[idx - 1] == ',' ||
		    p[idx - 1] == ';' ||
		    p[idx - 1] == '.' ||
		    p[idx - 1] == '!' ||
		    p[idx - 1] == '?' ||
		    p[idx - 1] == '"' ||
		    p[idx - 1] == '(' ||
		    p[idx - 1] == ')' ||
		    p[idx - 1] == '{'  ||
		    p[idx - 1] == '}'  ||
		    idx == 0)
			p[idx] -= 32;

		idx++;
	}

	return (p);
}
