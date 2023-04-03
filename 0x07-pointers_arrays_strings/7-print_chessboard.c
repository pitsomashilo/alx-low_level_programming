#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: array
 */
void print_chessboard(char (*a)[8])
{
	int i; /* counter variable */
	int j; /* counter variable */

	for (i = 0; i < 8; i++) /* outer loop to print row values */
	{
		for (j = 0; j < 8; j++) /* inner loop to print column values */
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
