#include <stdio.h>

/**
 * check - checks for the square root
 * @p:input value
 * @i:input value
 *
 * Return: int
 */
int check(int p, int i)
{
	if (p * p == i)
		return (p);
	if (p * p > i)
		return (-1);
	return (check(p + 1, i));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input value
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
