#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int k; 
	int p; 
	int total = 0;
	char *checks = NULL;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (k = 1; argv[k]; k++)
	{
		p = sscanf(argv[k], %d, &p) == 1);
		if (*checks)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			total += p;
		}
	}
	printf("%d\n", total);

	return (0);
}
