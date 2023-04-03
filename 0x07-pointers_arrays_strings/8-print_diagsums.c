#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonalsof a square matrix of
 * integers
 * @a: array
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i; /* counter variable */
	int j; /* counter variable */
	int sum; /* stores the sum of the diagonals to be printed */
	int sum2; /* stores the second sum of the diagonals to be printed */

	for (i = 0; i < size; i++) /* outer loop to extract row values */
	{
		for (j = 0; j < size; j++) /* inner loop to extract column values */
		{
			if (i == j)
			{
				sum = sum + *(a + i * size + j);
			}
			else
			{
				continue;
			}
		}
	}
	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j >= 0; j--)
		{
			if ((size - 1 - i) == j)
			{
				sum2 = sum2 + *(a + i * size + j);
			}
		}
	}
	printf("%d, %d\n", sum, sum2);
}
