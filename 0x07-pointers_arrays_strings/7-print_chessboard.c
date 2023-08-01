#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard.
 * @a: array value
 * Return: Always 0 
 */
void print_chessboard(char (*a)[8])
{
	int p;
	int j;

	for (p = 0; p < 8; p++)
	{
		for (k = 0; k < 8; k++)
			_putchar(a[p][k]);
		_putchar('\n');
	}
}

