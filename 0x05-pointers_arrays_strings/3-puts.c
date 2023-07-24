#include "main.h"
/**
 * _puts -  a function that prints a string
 * followed by a new line, to stdout
 * @: str
 */
void _puts(char *str);
{
	char *str;

	while (*str != '\0')
	{
		pucthar(*str++);
	}

	putchar (‘\n’);
}

