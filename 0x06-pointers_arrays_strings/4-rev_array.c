#include "stdio.h"
/**
 * _array -  a function that reverses the content of an array of integers
 * @a: string value
 * @n: string value
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int p;

	for (i = 0; i < n--; i++)
	{
		p = a[i];
		a[i] = a[n];
		a[n] = p;
	}
}

