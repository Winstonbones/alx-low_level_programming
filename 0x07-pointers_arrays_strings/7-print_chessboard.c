#include <stdio.h>
/**
 * print_chessboard -  a function that prints the chessboard.
 * @a: array value
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int n;

	for (i = 0; i < 8; i++)
	{
		for (n = 0; n < 8; n++)
			putchar(a[i][n]);
		putchar('\n');
	}
}

