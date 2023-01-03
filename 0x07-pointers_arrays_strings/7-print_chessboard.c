#include <stdio.h>
#include <string.h>

/**
 * print_chessboard - prints a chessboard
 * Description: Prints a chessboard
 * @a: accepts array char
 * Return: returns void
 */

void print_chessboard(char (*a)[8])
{
	int i;

	for (i = 0; i < 8; i++)
	{
		int j;

		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
