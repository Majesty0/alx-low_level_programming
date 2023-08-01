#include "main.h"

/**
 * print_chessboard - prints array of chessboard
 * @a: chessboard array
 * Return: always 0
 */

void print_chessboard(char (*a)[8])
{
	int row, coln;

	for (row = 0; row < 8; row++)
	{
		for (coln = 0; coln < 8; coln++)
		{
			_putchar(a[row][coln]);
		}
		_putchar('\n');
	}
	return (0);
}
