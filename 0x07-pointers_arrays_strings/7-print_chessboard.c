#include "main.h"
/**
 * print_chessboard - A function that prints the chessboard; mental torture
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int u;
	int w;

	for (u = 0; u < 8; u++)
	{
		for (w = 0; w < 8; w++)
			_putchar(a[u][w]);
		_putchar('\n');
	}
}
