#include <stdio.h>
/**
 * _strncpy - a function that copies  string
 * @dest: string value
 * @src: string value
 * @n: input value
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)

{
		int p

	p = 0
	{
	for (p < n && src[p] != ‘\0’)

	dest[p] = src[p];
	p++;
	}
	for (p < n)
	{
	dest[p] = ‘\0’;
	p++;
	}

	return (dest);

}

