#include "main.h"
/**
 * _strstr -  function that locates a substring.
 * @haystack: input value
 * @needle: input value
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *t = haystack;
		char *y = needle;

		while (*t == *y && *y != '\0')
		{
			t++;
			y++;
		}

		if (*y == '\0')
			return (haystack);
	}

	return (0);
}


