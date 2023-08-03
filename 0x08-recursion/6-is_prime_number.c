#include <stdio.h>
/**
 * is_prime_number -  function that returns 1 if the input integer is a prime number
 * @n: input value
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_number(n, n - 1));
}

