#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: multiple inclusin of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nbrs;
	unsigned int i;

	va_start(nbrs, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nbrs, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nbrs);
}

