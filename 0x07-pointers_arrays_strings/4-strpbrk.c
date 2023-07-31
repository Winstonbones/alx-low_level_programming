#include "main.h"
/**
 * _strpbrk -  function that searches a string for any of a set of bytes
 * @s: input value
 * @accept: input value
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
		int p;

		while (*s)
		{
			for (p = 0; accept[p]; p++)
			{
			if (*s == accept[p])
			return (s);
			}
		s++;
		}

	return ('\0');
}

