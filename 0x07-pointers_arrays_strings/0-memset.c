#include "main.h"
/**
 *_memset - a fucntion that fills memory with constant bytt
 * @b : input value
 * @s : input value
 * @n : input value
 *
 * Return : s
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}


