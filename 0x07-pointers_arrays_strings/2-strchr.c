#include "main.h"
/**
 * _strchr -  function that locates a character in a string
 * @s: input value
 * @c: input value
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s >= '\0'; i++)
	{
		if (*s == c)
			return (s);
	}
	return (0);
}

