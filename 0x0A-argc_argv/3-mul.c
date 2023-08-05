#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int p;
	int k;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	p = atoi(argv[1]);
	k = atoi(argv[2]);
	printf("%d\n", p * k);

	return (0);

}

