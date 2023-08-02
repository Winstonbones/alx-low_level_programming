#include <stdio.h>
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input value
 *
 * Return: the result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion(n, 0));
}

