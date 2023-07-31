#include "main.h"
#include <stdio.h>

/**
 *_memcpy - a fucntion that copies memory area
 * @dest : input value
 * @src : input value
 * @n : input value
 *Return : Dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p = 0;
	int i = n;

	for (; p < i; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}


